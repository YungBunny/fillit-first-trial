/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 21:56:33 by cfu               #+#    #+#             */
/*   Updated: 2017/01/26 23:09:07 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

int			ft_solver(char *brd, int *chars, int *off_sets, char c, int spot, size_t boardsz)
{
	int		l;
	int		u;
	int		next;
	int		count;

	l = -1;
	u = 4;
	next = spot + 1;
	count = 0;
	if (brd[spot] == '\n')
		spot++;
	if (brd[spot] == '\0')
		return (0);
	while (*chars)
	{
		while (*chars > l && *chars < u)
		{
			*chars = *chars - (count * 4);
			if (brd[spot + *chars] == '.')
				chars++;
			else
			{
				spot++;
				ft_solver(&brd[next], &*chars, off_sets, c, next, boardsz);
			}
		}
		count++;
		spot = spot + (int)boardsz;
		l += 4;
		u += 4;
	}
	return (1);
}
