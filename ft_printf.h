/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolo <lolo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:58:05 by lolo              #+#    #+#             */
/*   Updated: 2023/07/05 21:00:31 by lolo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

void ft_putnbr_hex(unsigned long long n, char *base);
int ft_writehex(unsigned long long n, char flag);
int ft_pointer_add(unsigned long long n);
int ft_putchar(char c);
int ft_putstr(char *s);
int ft_putnbr(int d);
int ft_putnbr_u(unsigned long u);
int ft_putchar_percent(void);
int printflags(const char *str, va_list arg, int i);
int	ft_printf(const char *str, ...);

#endif