/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolo <lolo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:01:33 by lolo              #+#    #+#             */
/*   Updated: 2023/07/04 18:12:50 by lolo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int ft_putnbr_hex(unsigned long long n, char *base);
int ft_writehex(unsigned long long n, char flag);
int ft_pointer_add(unsigned long long n);
int ft_putchar(char c);
int ft_putstr(char *s);
int ft_putnbr(int d);
int ft_putnbr_u(unsigned long u);
int ft_putchar_percent(char c);
int	ft_printf(const char *str, ...);

#endif