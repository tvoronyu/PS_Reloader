/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvoronyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 14:37:05 by tvoronyu          #+#    #+#             */
/*   Updated: 2018/03/20 14:37:07 by tvoronyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putnbr(int nb)
{
	int truncate;
	int called;

	called = 0;
	truncate = 1000000000;
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('2');
			nb %= 1000000000;
		}
		nb *= -1;
	}
	while (truncate > 0)
	{
		if ((nb / truncate) != 0 || called == 1 || (nb == 0 && truncate == 1))
		{
			called = 1;
			ft_putchar((nb / truncate) + '0');
		}
		nb %= truncate;
		truncate /= 10;
	}
}
