/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvoronyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 14:38:15 by tvoronyu          #+#    #+#             */
/*   Updated: 2018/03/20 14:38:21 by tvoronyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			ft_strcmp(char *s1, char *s2)
{
	unsigned char	s1_value;
	unsigned char	s2_value;
	int				i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != 0)
		i++;
	s1_value = s1[i];
	s2_value = s2[i];
	return (s1_value - s2_value);
}
