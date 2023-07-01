/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolo <lolo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:42:53 by lolo              #+#    #+#             */
/*   Updated: 2023/06/30 20:04:02 by lolo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdarg.h>

int ft_printf(const char *str, ...)
{
    int i;
    int len;
    va_list arg;

    i = 0;
    len = 0;
    va_start(arg, str);
    while (str[i])
    {
        if (str[i] == '%')
            len += ft_flags(str, arg, ++i);
        else
            len += ft_putchar(str[i]);
        i++;
    }
    va_end(arg);
    return(len);
}   