/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getboardsz.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 19:35:24 by cfu               #+#    #+#             */
/*   Updated: 2017/01/20 22:08:50 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

size_t		ft_getboardsz(int size)
{
	size_t i;

	i = 0;
	size = size * 4;
	while ((i * i) < (size_t)size)
		i++;
	return (i);
}