/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:34:21 by sfaouzi           #+#    #+#             */
/*   Updated: 2024/11/15 14:34:23 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

void	ft_putptr(void *ptr, int *i)
{
	if (ptr == NULL)
		return (ft_putstr("(nil)", i));
	ft_putstr("0x", i);
	ft_base((unsigned long long)ptr, 'x', i);
}
