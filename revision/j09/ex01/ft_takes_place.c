/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_takes_place.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/12 19:04:24 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/12 19:52:05 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_takes_place(int hour)
{
	if (0 < hour && hour < 11)
		printf("%s %i%s %i%s", "THE FOLLOWING TAKES PLACE BETWEEN", hour,
		".00 A.M.", (hour + 1), ".00 A.M.");
	else if (12 < hour && hour < 23)
	{
		hour = hour - 12;
		printf("%s %i%s %i%s", "THE FOLLOWING TAKES PLACE BETWEEN", hour,
		".00 P.M.", (hour + 1), ".00 P.M.");
	}
	else if (hour == 11)
		printf("%s", "THE FOLLOWING TAKES PLACE BETWEEN 11.00 A.M. 12.00 P.M.");
	else if (hour == 23)
		printf("%s", "THE FOLLOWING TAKES PLACE BETWEEN 11.00 P.M. 12.00 A.M.");
	else if (hour == 0)
		printf("%s", "THE FOLLOWING TAKES PLACE BETWEEN 12.00 A.M. 01.00 A.M.");
	else if (hour == 12)
		printf("%s", "THE FOLLOWING TAKES PLACE BETWEEN 12.00 P.M. 01.00 P.M.");
	write(1, "\n", 1);
}
