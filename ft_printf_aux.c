/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_aux.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolo <lolo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:58:28 by lolo              #+#    #+#             */
/*   Updated: 2023/07/24 18:57:28 by lolo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	int	value;

	value = 0;
	value = write(1, &c, 1);
	if (value == 1)
		return (1);
	else
		return (-1);
}

int	ft_putstr(char *s)
{
	int	i;
	int	value;

	i = -1;
	value = 0;
	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[i] != '\0')
	{
		i++;
		value = write(1, &s[i], 1);
		if (value == -1)
			return (-1);
	}
	return (i);
}

int	ft_putnbr(int d)
{
	int	len;

	len = 0;
	if (d == -2147483648)
		return (write(1, "-2147483648", 11));
	if (d < 0)
	{
		len += ft_putchar('-');
		d = -d;
	}
	if (d > 9)
		len += ft_putnbr(d / 10);
	len += ft_putchar(d % 10 + 48);
	return (len);
}

int	ft_putnbr_u(unsigned long u)
{
	int	len;

	len = 0;
	if (u > 9)
		len += ft_putnbr_u(u / 10);
	len += ft_putchar(u % 10 + 48);
	return (len);
}

int	ft_putchar_percent(void)
{
	int	value;

	value = 0;
	value = write(1, "%", 1);
	if (value == 1)
		return (1);
	else
		return (-1);
}
