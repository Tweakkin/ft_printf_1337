/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboukhmi <yboukhmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 18:05:03 by yboukhmi          #+#    #+#             */
/*   Updated: 2025/11/23 17:41:46 by yboukhmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_dec_tohexa(unsigned long n, char c)
{
	char	*og_hexa;
	int		count;

	count = 0;
	if (c == 'X')
		og_hexa = "0123456789ABCDEF";
	else
		og_hexa = "0123456789abcdef";
	if (n >= 16)
		count += ft_dec_tohexa((n / 16), c);
	count += catch_err(ft_putchar(og_hexa[n % 16]));
	return (count);
}

int	ft_dec_tohexa_p(void *p)
{
	int	count;

	count = 0;
	if (!p)
	{
		count = ft_putstr("(nil)");
		return (count);
	}
	count += ft_putstr("0x");
	count += ft_dec_tohexa((unsigned long)p, 'x');
	return (count);
}
