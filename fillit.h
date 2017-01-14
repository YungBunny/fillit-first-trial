/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 15:12:23 by cfu               #+#    #+#             */
/*   Updated: 2017/01/13 19:03:31 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

#define BUFF_SIZE 21

#include "libft/libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

static char **v_tets = {"####", "#....#....#....#", "#....#....#....##",
						"##...#....#", "##....#....#", "#....#....#...##",
						"###..#", "###....#", "#....##...#", "#...##....#",
						"###...#", "#...###", "##....##", "##..##", 
						"#....##....#", "#...##...#", "##...##"};

int					ft_getfile(int fd);

static void 		ft_plcbrs(char *str);
char				*ft_gettet(int fd);

#endif