/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboukhmi <yboukhmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 17:47:27 by yboukhmi          #+#    #+#             */
/*   Updated: 2025/11/23 18:14:37 by yboukhmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_formats(char format, va_list list)
{
	int	count;

	count = 0;
	if (format == 'c')
		count = catch_err(ft_putchar(va_arg(list, int)));
	else if (format == 's')
		count = ft_putstr(va_arg(list, char *));
	else if (format == '%')
		count = catch_err(ft_putchar('%'));
	else if (format == 'x' || format == 'X')
		count = ft_dec_tohexa(va_arg(list, unsigned int), format);
	else if (format == 'p')
		count = ft_dec_tohexa_p(va_arg(list, void *));
	else if (format == 'd' || format == 'i')
		count = ft_putnbr(va_arg(list, int));
	else if (format == 'u')
		count = ft_putunsignednbr(va_arg(list, unsigned int));
	else if (format == '\0')
		return (-1);
	else
	{
		count = catch_err(ft_putchar('%'));
		count += catch_err(ft_putchar(format));
	}
	return (count);
}

int	ft_printf(const char *s, ...)
{
	va_list		list;
	int			count;
	int			n;

	if (!s)
		return (-1);
	va_start(list, s);
	count = 0;
	while (*s)
	{
		if (*s != '%')
			count += catch_err(ft_putchar(*s));
		else
		{
			n = handle_formats(*(++s), list);
			if (n == -1)
				return (va_end(list), (-1));
			count += n;
		}
		s++;
	}
	va_end(list);
	if (catch_err(0) == -1)
		return (-1);
	return (count);
}
