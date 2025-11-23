/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignednbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboukhmi <yboukhmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 15:46:01 by yboukhmi          #+#    #+#             */
/*   Updated: 2025/11/23 15:46:11 by yboukhmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putunsignednbr(unsigned long n)
{
	int		count;

	count = 0;
	if (n > 9)
		count += ft_putnbr(n / 10);
	count += ft_putchar((n % 10) + '0');
	return (count);
}