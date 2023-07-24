/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_aux_bis.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolo <lolo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:45:45 by lolo              #+#    #+#             */
/*   Updated: 2023/07/24 18:56:57 by lolo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_hex(unsigned long long n, char *base)
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

int	ft_writehex(unsigned long long n, char flag)
{
	char	*base_minx;
	char	*base_mayx;
	int		len;

	base_minx = "0123456789abcdef";
	base_mayx = "0123456789ABCDEF";
	len = 0;
	if (n == 0)
		len += write(1, "0", 1);
	else if (flag == 'x')
		ft_putnbr_hex(n, base_minx);
	else if (flag == 'X')
		ft_putnbr_hex(n, base_mayx);
	while (n)
	{
		n /= 16;
		++len;
	}
	return (len);
}

int	ft_pointer_add(unsigned long long n)
{
	int	len;

	len = 0;
	len += write(1, "0x", 2);
	len += ft_writehex(n, 'x');
	return (len);
}
