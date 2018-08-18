/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvoronyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 14:01:14 by tvoronyu          #+#    #+#             */
/*   Updated: 2018/03/20 14:19:44 by tvoronyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *ofint;
	int n;

	n = 0;
	if (min >= max)
		return (0);
	ofint = (int*)malloc(sizeof(*ofint) * (max - min) + 1);
	while (min <= max)
	{
		ofint[n] = min;
		n++;
		min++;
	}
	n = 0;
	return (ofint);
}
