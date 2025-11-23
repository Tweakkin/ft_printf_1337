/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboukhmi <yboukhmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 11:28:48 by yboukhmi          #+#    #+#             */
/*   Updated: 2025/11/23 17:43:12 by yboukhmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	count;

	count = 0;
	if (!s)
	{
		count = ft_putstr("(null)");
		return (count);
	}
	if (!*s)
		return (0);
	while (s[count])
		catch_err(ft_putchar(s[count++]));
	return (count);
}
