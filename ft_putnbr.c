/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:33:26 by sfaouzi           #+#    #+#             */
/*   Updated: 2024/11/15 14:33:29 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

void	ft_putnbr(int n, int *i)
{
	int	r;

	if (n == -2147483648)
		ft_putstr("-2147483648", i);
	else if (n > 9)
	{
		r = n % 10;
		n = n / 10;
		ft_putnbr(n, i);
		r = r + 48;
		ft_putchar(r, i);
	}
	else if (n < 0)
	{
		ft_putchar('-', i);
		n *= -1;
		ft_putnbr(n, i);
	}
	else
	{
		r = n + 48;
		ft_putchar(r, i);
	}
}
