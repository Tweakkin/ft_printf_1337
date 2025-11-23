/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboukhmi <yboukhmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 18:05:03 by yboukhmi          #+#    #+#             */
/*   Updated: 2025/11/22 18:31:01 by yboukhmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_dec_tohexa(unsigned long n, char c)
{
	char	*og_hexa;
	int		count;

	count = 0;
	if (c == 'x')
		og_hexa = "0123456789abcdef";
	else if (c == 'X')
		og_hexa = "0123456789ABCDEF";
	if (n >= 16)
		count += ft_dec_tohexa((n / 16), c);
	count += ft_putchar(og_hexa[n % 16]);
	return (count);
}
