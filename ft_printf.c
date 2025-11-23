/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboukhmi <yboukhmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 17:47:27 by yboukhmi          #+#    #+#             */
/*   Updated: 2025/11/22 19:02:51 by yboukhmi         ###   ########.fr       */
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
	return (count);
}
int main()
{
int n = -32;// A hex number

printf("%d\n", (unsigned int)n); // Prints: 1a2b3c (No prefix)
}