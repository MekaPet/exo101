/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_cat.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 19:21:50 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/19 18:51:36 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/ft.h"

void		ft_putstr(char *str)
{
	int		len;

	len = 0;
	while (str[len])
		len++;
	write(1, str, len);
}

void		ft_puterr(char *str)
{
	int		len;

	len = 0;
	while (str[len])
		len++;
	write(2, str, len);
}

void		ft_print_err(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	ft_puterr("ft_cat: ");
	ft_puterr(str);
	if (len >= 256)
	{
		ft_puterr(": File Name too long\n");
		return ;
	}
	if (errno == 2)
		ft_puterr(": No such file or directory\n");
	if (errno == 13)
		ft_puterr(": Permission denied\n");
	if (errno == 21)
		ft_puterr(": Is a directory\n");
}

void		ft_read_stdin(void)
{
	char	c;

	while (1)
	{
		read(0, &c, BUF_SIZE);
		write(1, &c, BUF_SIZE);
	}
}

int			main(int argc, char **argv)
{
	int		i;
	int		fd;
	int		ret;
	char	buf[BUF_SIZE];

	i = 1;
	errno = 0;
	if (argc == 1 || *argv[1] == '-')
		ft_read_stdin();
	while (argv[i])
	{
		errno = 0;
		fd = open(argv[i], O_RDWR);
		if (fd >= 0)
		{
			while ((ret = read(fd, buf, BUF_SIZE) && errno == 0))
				ft_putstr(buf);
			close(fd);
		}
		else
			ft_print_err(argv[i]);
		buf[ret] = '\0';
		i++;
	}
	return (0);
}
