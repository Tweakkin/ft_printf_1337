/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignednbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboukhmi <yboukhmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 15:46:01 by yboukhmi          #+#    #+#             */
/*   Updated: 2025/11/23 17:43:25 by yboukhmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsignednbr(unsigned long n)
{
	int		count;

	count = 0;
	if (n > 9)
		count += ft_putnbr(n / 10);
	count += catch_err(ft_putchar((n % 10) + '0'));
	return (count);
}
