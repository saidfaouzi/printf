/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:34:57 by sfaouzi           #+#    #+#             */
/*   Updated: 2024/11/15 14:34:58 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_pre(const char *str, va_list args, int *i)
{
	while (*str)
	{
		if (*str == '%' && *(str + 1) == '\0')
			*i = -1;
		else if (*str == '%')
		{
			str++;
			if (*str == 'c')
				ft_putchar(va_arg(args, int), i);
			else if (*str == 's')
				ft_putstr(va_arg(args, char *), i);
			else if (*str == 'p')
				ft_putptr(va_arg(args, void *), i);
			else if (*str == 'd' || *str == 'i')
				ft_putnbr(va_arg(args, int), i);
			else if (*str == 'u' || *str == 'x' || *str == 'X')
				ft_base(va_arg(args, unsigned int), *str, i);
			else if (*str == '%')
				ft_putchar('%', i);
		}
		else
			ft_putchar(*str, i);
		str++;
	}
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;

	i = 0;
	if (str == NULL)
		return (-1);
	va_start(args, str);
	ft_pre(str, args, &i);
	va_end(args);
	return (i);
}
#include <stdio.h>

int main ()
{
	int *i = NULL;
	int j;
	j = ft_printf("%p",NULL);

	printf("\n%d\n",j);

	j = printf("%p",NULL);

	printf("\n%d\n",j);




}
