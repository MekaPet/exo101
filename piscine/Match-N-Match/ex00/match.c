/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   match.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/15 11:01:04 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/16 08:50:32 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

int	match(char *s1, char *s2)
{
	if (*s1 && *s2 == '*')
	  return (match(s1, s2 + 1) || match(s1 + 1, s2));
	else if ((*s1 == '\0') && *s2 == '*')
		return (match(s1, (s2 + 1)));
	else if (*s1 && *s2 && *s1 == *s2)
		return (match((s1 + 1), (s2 + 1)));
	else if ((*s1 == '\0') && (*s2 == '\0'))
		return (1);
	return (0);
}

int main()
{
  printf("%i\n%i\n", match("bon", "bo*n"), match("bon", "b*"));
  return (0);
}
