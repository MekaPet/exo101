/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_verif.h                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: elgrusko <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/15 09:37:08 by elgrusko     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/15 14:46:48 by elgrusko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_VERIF_H
# define FT_VERIF_H

int		on_line(int k, int **sudoku, int i);
int		on_column(int k, int **sudoku, int j);
int		on_block(int k, int **sudoku, int i, int j);
int		check_numbers(char **argv);
int		valid_sudoku(int **argv);

#endif
