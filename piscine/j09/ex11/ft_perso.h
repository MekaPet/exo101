/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_perso.h                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/13 15:53:01 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/13 16:05:39 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H
# define SAVE_THE_WORLD "warrior"

typedef	struct	s_perso
{
	char		*name;
	double		life;
	int			age;
	char		*profession;
}				t_perso;

#endif
