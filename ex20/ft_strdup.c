/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvoronyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 13:39:14 by tvoronyu          #+#    #+#             */
/*   Updated: 2018/03/20 13:59:46 by tvoronyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*temp;
	int		n;

	n = 0;
	while (src[n] != '\0')
		n++;
	if (!(temp = (char*)malloc(sizeof(char) * n + 1)))
		return (NULL);
	n = 0;
	while (src[n] != '\0')
	{
		temp[n] = src[n];
		n++;
	}
	temp[n] = '\0';
	return (temp);
}
