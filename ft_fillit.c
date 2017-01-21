/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 17:18:05 by cfu               #+#    #+#             */
/*   Updated: 2017/01/20 22:27:32 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_fillit(int fd)
{
	char	*res;
	char	*brd;
	int		valid;
	size_t	rbyt;
	t_list	*tet_list;
	t_list	*res_list;
	
	rbyt = 21;
	tet_list = ft_lstnew(NULL, 0);
	res_list = tet_list;
	while (rbyt == 21)
	{
		res = ft_gettet(fd, &rbyt);
		valid = 0;
		if ((valid = ft_validate_tets(res)) == 1)
		{
			ft_pound_to_letter(res);
			ft_trim_per(res, '.');
			tet_list = ft_list_em(res, tet_list);
		}
	}
	brd = ft_make_board(ft_getboardsz(ft_list_size(res_list)));
	ft_put_charlst(res_list);
}
