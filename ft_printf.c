/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboukhmi <yboukhmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 17:47:27 by yboukhmi          #+#    #+#             */
/*   Updated: 2025/11/23 15:58:15 by yboukhmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_formats(char format, va_list list)
{
	int	count;
	
	count = 0;
	if (format == 'c')
		count = ft_putchar(va_arg(list, int));
	if (format == 's')
		count = ft_putstr(va_arg(list, char *));
	if (format == '%')
		count = ft_putchar('%');
	if (format == 'x' || format == 'X')
		count = ft_dec_tohexa(va_arg(list, unsigned int), format);
	if (format == 'p')
		count = ft_dec_tohexa_p(va_arg(list, void *));
	if (format == 'd' || format == 'i')
		count = ft_putnbr(va_arg(list, int));
	if (format == 'u')
		count = ft_putunsignednbr(va_arg(list, unsigned int));
	return (count);
}

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
			count += handle_formats(*s, list);
		}
		else
			count += ft_putchar(*s);
		s++;
	}
	va_end(list);
	return (count);
}
