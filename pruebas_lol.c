/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebas_lol.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolo <lolo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:48:16 by lolo              #+#    #+#             */
/*   Updated: 2023/07/10 17:10:08 by lolo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	const char	*s;

	s = "Hello";
	printf("Character:\t%c \n", 67);
	ft_printf("ft_Character:\t%c \n\n", 67);

	printf("String:\t%s \n", s);
	ft_printf("ft_String:\t%s \n\n", s);

	printf("Integer:\t%i\n", -5);
	ft_printf("ft_Integer:\t%i\n\n", -5);

	printf("Decimal:\t%d\n", 103);
	ft_printf("ft_Decimal:\t%d\n\n", 103);

	printf("Unsigned:\t%u\n", 15);
	ft_printf("ft_Unsigned:\t%u\n\n", 15);

	printf("hexadecimal:\t%x\n", 15);
	ft_printf("ft_hexadecimal:\t%x\n\n", 15);

	printf("HEXADECIMAL:\t%X\n", 15);
	ft_printf("ft_HEXADECIMAL:\t%X\n\n", 15);

	printf("Percent:\t%%\n");
	ft_printf("ft_percent:\t%%\n\n");

}