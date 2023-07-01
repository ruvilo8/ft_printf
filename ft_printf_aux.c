/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_aux.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolo <lolo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:58:28 by lolo              #+#    #+#             */
/*   Updated: 2023/07/01 20:28:32 by lolo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c)
{
    int value;

    value = 0;
    value = write(1, &c, 1);
    if (value == 1)
        return(1);
    else
        return(-1);
}

int ft_putstr(char *s)
{
    int i;
    int value;

    i = 0;
    value = 0;
    if (s == NULL)
        return(-1)
    while (s[i] != '\0')
    {
        value = write(1, &s[i], 1);
        if (value == -1)
            return(-1);
        i++;
    }
    return(i);
}

int ft_putnbr(int d)
{
    int len;

    len = 0;
    if (d == -2147483648)
        return (1, "-2147483648", 11);
    if (d < '0')
    {
        len += putchar('-');
        d = -d;
    }
    if (d > '9')
        len += ft_putnbr(d / 10);
    len += ft_putchar(d % 10 + 48);
    return(len);
}

int ft_putnbr_u(unsigned long u)
{
    int len;

    len = 0;
    if (u > 9)
        len += ft_putnbr_u(u / 10);
    len += ft_putnbr_u(u % 10 + 48);
    return(len);
}

int ft_putchar_percent(char c)
{
    int value;

    value = 0;
    value = write(1, "%", 1);
    if (value == 1)
        return(1);
    else
        return(-1);
}

int ft_putnbr_hex(unsigned long long n, char *base)
{
    if (n < 16)
        ft_putchar(base[n]);
    if (n > 15)
    {
        ft_putnbr_hex(n / 16, base);
        ft_putnbr_hex(n % 16, base);
    }
    else
        ft_putchar(n + 48);
}

int ft_writehex(unsigned long long n, char flag)
{
    char    base_minx;
    char    base_mayx;
    int len;

    base_minx = "0123456789abcdef";
    base_mayx = "0123456789ABCDEF";
    len = 0;
    if (n == 0)
        len += write(1, "0", 1);
    else
    {
        if (flag == 'x')
            len += ft_putnbr_hex(n, base_minx);
        if (flag == 'X')
            len += ft_putnbr_hex(n, base_mayx);
    }

    return(len);
}