/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:33:57 by sfaouzi           #+#    #+#             */
/*   Updated: 2024/11/15 14:33:59 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <stdarg.h>
# include <unistd.h>

void	ft_putchar(char c, int *i);
void	ft_putnbr(int n, int *i);
void	ft_base(unsigned long long n, char c, int *i);
void	ft_putstr(char *str, int *i);
void	ft_putptr(void *ptr, int *i);
#endif
