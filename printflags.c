/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printflags.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolo <lolo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:22:59 by lolo              #+#    #+#             */
/*   Updated: 2023/07/05 21:09:21 by lolo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int printflags(const char *str, va_list arg, int i)
{
    int len;

    len = 0;
    if (str[i] == 'c')
        len += ft_putchar(va_arg(arg, int));
    else if (str[i] == 's')
        len += ft_putstr(va_arg(arg, char*));
    else if (str[i] == 'd')
        len += ft_putnbr(va_arg(arg, int));
    else if (str[i] == 'i')
        len += ft_putnbr(va_arg(arg, int));
    else if (str[i] == 'u')
        len += ft_putnbr_u(va_arg(arg, unsigned int));
    else if (str[i] == '%')
        len += ft_putchar_percent();
    else if (str[i] == 'x')
        len += ft_writehex(va_arg(arg, unsigned int), 'x');
    else if (str[i] == 'X')
        len += ft_writehex(va_arg(arg, unsigned int), 'X');
    else if (str[i] == 'p')
        len += ft_pointer_add(va_arg(arg, unsigned long));
    return (len);
}