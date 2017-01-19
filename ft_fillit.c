/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 17:18:05 by cfu               #+#    #+#             */
/*   Updated: 2017/01/18 22:27:05 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_fillit(int fd)
{
	char	*res;
	int		valid;
	t_list	*tet_list;

	while (fd)
	{
		res = ft_gettet(fd);
		valid = 0;
		if ((valid = ft_validate_tets(res)) == 1)
			tet_list = ft_list_em(res, tet_list);
	}
	ft_print_list(tet_list);
}
