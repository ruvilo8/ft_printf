/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_aux.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolo <lolo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:58:28 by lolo              #+#    #+#             */
/*   Updated: 2023/07/06 16:29:50 by lolo             ###   ########.fr       */
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

	i = 0;
	value = 0;
	if (s == NULL)
		return (-1);
	while (s[i] != '\0')
	{
		value = write(1, &s[i], 1);
		if (value == -1)
			return (-1);
		i++;
	}
	return (i);
}

int	ft_putnbr(int d)
{
	int	len;

	len = 0;
	if (d == -2147483648)
		return (write(1, "-2147483648", 11));
	if (d < '0')
	{
		len += ft_putchar('-');
		d = -d;
	}
	if (d > '9')
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
	len += ft_putnbr_u(u % 10 + 48);
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
