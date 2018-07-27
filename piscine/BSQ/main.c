/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   huge_main.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vde-sain <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/25 18:55:33 by vde-sain     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/25 23:35:24 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	g_res = 0;
int	g_x = 0;
int	g_y = 0;
int	g_or_x;
int	g_or_y;
char	g_empt;
char	g_obst;
char	g_full;

int     main(int ac, char **av)
{
  int     i, j, fd, **i_tab;
  char    buf[BUF_SIZE];
  char    *str, **tab;

  if (ac < 2)
    return (0);

 	/*
	 ** compte les chars
	 */
  i = 0, j = 0;
  fd = open(av[1], O_RDWR);
  if (fd >= 0)
    {
      while (read(fd, buf, BUF_SIZE))
	{
	  if (buf[0] == '\n')
	    i++;
	  if (i != 0)
	    j++;
	}
      close(fd);
    }
  
  /*
  ** Transforme la chaine de chars
  ** 	en tab de chars
  */
  str = malloc(sizeof(char) * (j + 1));
  fd = open(av[1], O_RDWR);
  i = 0; j = 0;
  if (fd >= 0)
    {
      while (read(fd, buf, BUF_SIZE))
	{
	  if (buf[0] == '\n')
	    i++;
	  if (i >= 0)
	    {
	      str[j] = buf[0];
	      j++;
	    }
		}
      str[j++] = '\0';
		close(fd);
    }
  tab = ft_split_backslash_n(str, 0);
  ft_check_tab(tab);
  
  /*
  ** Convertit le tab en tab binaire
  */
  i_tab = ft_convert_tab(tab, g_or_x, g_or_y, g_obst);
  free(tab);
  
  // ** Fonction demineur
  i_tab = find_largest_nb(i_tab);
  i = 0, j = 0;
  fd = open(av[1], O_RDWR);
  if (fd >= 0)
    {
      while (read(fd, buf, BUF_SIZE))
	{
	  if (buf[0] == '\n')
	    i++;
	  if (i != 0)
	    j++;
	}
      close(fd);
    }

/*
** Transforme la chaine de chars
** en tab de chars
*/
	str = malloc(sizeof(char) * (j + 1));
	fd = open(av[1], O_RDWR);
	i = 0; j = 0;
	if (fd >= 0)
	{
		while (read(fd, buf, BUF_SIZE))
		{
			if (buf[0] == '\n')
				i++;
			if (i != 0)
			{
				str[j] = buf[0];
				j++;
			}
		}
		str[j++] = '\0';
		close(fd);
	}
	tab = ft_split_backslash_n(str, 0);
	char **c_tab;
	c_tab = ft_print_res_final_tab(tab);
	free(i_tab);
	i = 0;
	printf("\n");
	while (c_tab[i])
	{
		printf("%s", c_tab[i]);
		i++;
	}
	return (0);
}
