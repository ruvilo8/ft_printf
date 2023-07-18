/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebas_lol.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-vi <mruiz-vi@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:48:16 by lolo              #+#    #+#             */
/*   Updated: 2023/07/18 17:43:45 by mruiz-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	const char	*s;
	int			x;
	int			y;

	s = "Hello";
	x = printf("%s %s %s %s %s ", " - ", "", "4", "", "2 \n");
	y = ft_printf("%s %s %s %s %s ", " - ", "", "4", "", "2 \n");
	printf("x = %i \n y = %i\n", x, y);

	x = printf("\tNULL %s NULL \n", NULL);
	y = ft_printf("\tNULL %s NULL \n", NULL);
	printf("x = %i \n y = %i\n\n\n", x, y);

	printf("Character:\t%c \n", 67);
	ft_printf("Character:\t%c \n", 67);
	x = printf("Character:\t%c \n", 67);
	y = ft_printf("Character:\t%c \n", 67);
	printf("x = %i \n y = %i\n\n\n", x, y);

	printf("String:\t%s \n", s);
	ft_printf("ft_String:\t%s \n", s);
	x = printf("String:\t%s \n", s);
	y = ft_printf("ft_String:\t%s \n", s);
	printf("x = %i \n y = %i\n\n", x, y);

	printf("Integer:\t%i\n", -5);
	ft_printf("ft_Integer:\t%i\n", -5);
	x = printf("Integer:\t%i\n", -5);
	y = ft_printf("ft_Integer:\t%i\n", -5);
	printf("x = %i \n y = %i\n", x, y);

	printf("Decimal:\t%d\n", 103);
	ft_printf("ft_Decimal:\t%d\n", 103);
	x = printf("Decimal:\t%d\n", 103);
	y = ft_printf("ft_Decimal:\t%d\n", 103);
	printf("x = %i \n y = %i\n", x, y);

	printf("Unsigned:\t%u\n", 15);
	ft_printf("ft_Unsigned:\t%u\n", 15);
	x = printf("Unsigned:\t%u\n", 15);
	y = ft_printf("ft_Unsigned:\t%u\n", 15);
	printf("x = %i \n y = %i\n", x, y);

	printf("Integer:\t%i\n", 5);
	printf("hexadecimal:\t%x\n", 5);
	ft_printf("ft_hexadecimal:\t%x\n", 5);
	x = printf("hexadecimal:\t%x\n", 5);
	y = ft_printf("ft_hexadecimal:\t%x\n", 5);
	printf("x = %i \n y = %i\n\n", x, y);

	printf("Integer:\t%i\n", 27);
	printf("hexadecimal:\t%x\n", 27);
	ft_printf("ft_hexadecimal:\t%x\n", 27);
	x = printf("hexadecimal:\t%x\n", 27);
	y = ft_printf("ft_hexadecimal:\t%x\n", 27);
	printf("x = %i \n y = %i\n\n", x, y);

	printf("Integer:\t%i\n", 777);
	printf("hexadecimal:\t%X\n", 777);
	ft_printf("ft_hexadecimal:\t%X\n", 777);
	x = printf("hexadecimal:\t%X\n", 777);
	y = ft_printf("ft_hexadecimal:\t%X\n", 777);
	printf("x = %i \n y = %i\n\n", x, y);

	printf("Integer:\t%i\n", 105);
	printf("hexadecimal:\t%x\n", 105);
	ft_printf("ft_hexadecimal:\t%x\n", 105);
	x = printf("hexadecimal:\t%x\n", 105);
	y = ft_printf("ft_hexadecimal:\t%x\n", 105);
	printf("x = %i \n y = %i\n\n", x, y);

	printf("Integer:\t%i\n", 16);
	printf("hexadecimal:\t%x\n", 16);
	ft_printf("ft_hexadecimal:\t%x\n", 16);
	x = printf("hexadecimal:\t%x\n", 16);
	y = ft_printf("ft_hexadecimal:\t%x\n", 16);
	printf("x = %i \n y = %i\n\n", x, y);

	printf("HEXADECIMAL:\t%X\n", 19);
	ft_printf("ft_HEXADECIMAL:\t%X\n", 19);
	x = printf("HEXADECIMAL:\t%X\n", 19);
	y = ft_printf("ft_HEXADECIMAL:\t%X\n", 19);
	printf("x = %i \n y = %i\n\n", x, y);

	printf("hexadecimal:\t%x\n", 150);
	ft_printf("ft_hexadecimal:\t%x\n", 150);
	x = printf("hexadecimal:\t%x\n", 150);
	y = ft_printf("ft_hexadecimal:\t%x\n", 150);
	printf("x = %i \n y = %i\n\n", x, y);

	printf("HEXADECIMAL:\t%X\n", 19);
	ft_printf("ft_HEXADECIMAL:\t%X\n", 19);
	x = printf("HEXADECIMAL:\t%X\n", 19);
	y = ft_printf("ft_HEXADECIMAL:\t%X\n", 19);
	printf("x = %i \n y = %i\n\n", x, y);

	printf("Percent:\t%%\n");
	ft_printf("ft_percent:\t%%\n");
	x = printf("Percent:\t%%\n");
	y = ft_printf("ft_percent:\t%%\n");
	printf("x = %i \n y = %i\n\n", x, y);

	printf("Pointer:\t%p\n", &s);
	ft_printf("ft_Pointer:\t%p\n", &s);
	x = printf("Pointer:\t%p\n", &s);
	y = ft_printf("ft_Pointer:\t%p\n", &s);
	printf("x = %i \n y = %i\n\n", x, y);

	printf("Character:\t%c\nString:\t%s\nInteger:\t%i\nDecimal:\t%d\nUnsigned:\t%u\nhexadecimal:\t%x\nHexadecimal:\t%X\nPercent:\t%%\nPointer:\t%p\n", 67, s, -27, 150, 255, 255, 255, &s);
	ft_printf("ft_Character:\t%c\nft_String:\t%s\nft_Integer:\t%i\nft_Decimal:\t%d\nft_Unsigned:\t%u\nft_hexadecimal:\t%x\nft_Hexadecimal:\t%X\nft_Percent:\t%%\nft_Pointer:\t%p\n", 67, s, -27, 150, 255, 255, 255, &s);
	x = printf("Character:\t%c\nString:\t%s\nInteger:\t%i\nDecimal:\t%d\nUnsigned:\t%u\nhexadecimal:\t%x\nHexadecimal:\t%X\nPercent:\t%%\nPointer:\t%p\n", 67, s, -27, 150, 255, 255, 255, &s);
	y = ft_printf("ft_Character:\t%c\nft_String:\t%s\nft_Integer:\t%i\nft_Decimal:\t%d\nft_Unsigned:\t%u\nft_hexadecimal:\t%x\nft_Hexadecimal:\t%X\nft_Percent:\t%%\nft_Pointer:\t%p\n", 67, s, -27, 150, 255, 255, 255, &s);
	printf("x = %i \n y = %i\n", x, y);
}
