/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_get_next_line.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <bjuarez@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/23 19:36:03 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/25 22:24:06 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft.h"

char		*g_mapstock = "map_containment";

char		*ft_get_line1(char *str)
{
	char	*buff;
	int		i;
	int		j;
	int		fd;
	char	*str2;

	str2 = NULL;
	i = 0;
	j = 0;
	fd = open(str, O_RDONLY);
	buff = (char*)malloc(sizeof(char) * 1);
	str2 = (char*)malloc(sizeof(char) * 1);
	while (read(fd, buff, 1))
	{
		if (i == 0 && *buff != '\n')
			str2 = ft_strcat(str2, buff);
		else if (*buff == '\n')
		{
			str2 = ft_strcat(str2, buff);
			i++;
		}
		if (i > 0)
			return (str2);
	}
	return (str2);
}

int			ft_get_x(char *str)
{
	char	buff[BUFF_SIZE];
	int		i;
	int		j;
	int		fd;

	i = 0;
	j = 0;
	fd = open(str, O_RDONLY);
	while (read(fd, buff, 1))
	{
		if (i == 1)
			j++;
		else if (i > 1)
			return (j);
		if (*buff == '\n')
			i++;
	}
	return (j);
}

void		ft_get_grid(char *str, int x, int y, char *line)
{
	char	*buff;
	int		fd;
	int		fd2;

	buff = (char*)malloc(sizeof(char) * ((x + 1) *
	(y - 1) + (ft_strlen(line) + 1)));
	fd2 = open(g_mapstock, O_TRUNC | O_WRONLY | O_CREAT, 0644);
	fd = open(str, O_RDONLY);
	if (read(fd, buff, ((x + 1) * (y - 1) + (ft_strlen(line) + 1))))
	{
		write(fd2, buff, ((x + 1) * (y - 1) + (ft_strlen(line) + 1)));
	}
	close(fd2);
	close(fd);
}

char		**ft_get_tab(int x, int y, char *line)
{
	char	*buf;
	char	*str;
	char	**tab;
	int		fd;

	buf = malloc(sizeof(char) * ((x + 1) * (y - 1) + (ft_strlen(line) + 1)));
	str = (char*)malloc(sizeof(char) * 1);
	fd = open(g_mapstock, O_RDONLY);
	while (read(fd, buf, ((x + 1) * (y - 1) + (ft_strlen(line) + 1))))
	{
		str = ft_strcat(str, buf);
	}
	tab = ft_split_backslash_n(str, 0);
	return (tab);
}
