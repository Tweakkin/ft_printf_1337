/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboukhmi <yboukhmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 17:47:27 by yboukhmi          #+#    #+#             */
/*   Updated: 2025/11/21 21:26:19 by yboukhmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
    va_list	list;
	int		count;
	
	if (!s)
		return (-1);
	va_start(list, s);
	count = 0;
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			if (*s == '\0')
				break;
			handle_formats(*s, list);
		}
		else
			ft_putchar(*s);
		s++;
	}
}
