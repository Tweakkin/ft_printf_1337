/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboukhmi <yboukhmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 12:35:55 by yboukhmi          #+#    #+#             */
/*   Updated: 2025/11/23 17:42:59 by yboukhmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long n)
{
	int		count;

	count = 0;
	if (n < 0)
	{
		count += catch_err(ft_putchar('-'));
		n = -n;
	}
	if (n > 9)
		count += ft_putnbr(n / 10);
	count += catch_err(ft_putchar((n % 10) + '0'));
	return (count);
}
