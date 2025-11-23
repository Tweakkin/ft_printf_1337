/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboukhmi <yboukhmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 18:25:34 by yboukhmi          #+#    #+#             */
/*   Updated: 2025/11/23 18:15:14 by yboukhmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	int	ret;

	ret = write (1, &c, 1);
	if (ret == -1)
		return (-1);
	return (1);
}

int	catch_err(int ret)
{
	static int	n;

	if (ret == -1)
		n = -1;
	if (n == -1)
		return (-1);
	return (1);
}
