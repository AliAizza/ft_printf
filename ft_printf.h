/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 01:10:49 by aaizza            #+#    #+#             */
/*   Updated: 2021/11/24 18:04:59 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_putad(unsigned long n);
int	ft_putchar(char c);
int	ft_puthex(unsigned int n, char a);
int	ft_putnbr(long int n);
int	ft_putstr(char *s);
int	ft_putuns(unsigned int n);
#endif