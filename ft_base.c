/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:35:49 by sfaouzi           #+#    #+#             */
/*   Updated: 2024/11/15 14:35:58 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

void	ft_base(unsigned long long n, char c, int *i)
{
	unsigned long long	len;
	char				*base;

	base = "0123456789";
	len = 10;
	if (c == 'x')
	{
		base = "0123456789abcdef";
		len = 16;
	}
	else if (c == 'X')
	{
		base = "0123456789ABCDEF";
		len = 16;
	}
	if (n >= len)
		ft_base(n / len, c, i);
	ft_putchar(base[n % len], i);
}
