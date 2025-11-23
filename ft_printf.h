/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboukhmi <yboukhmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 17:47:34 by yboukhmi          #+#    #+#             */
/*   Updated: 2025/11/23 12:36:52 by yboukhmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stddef.h>

int	ft_putchar(char c);
int	ft_printf(const char *s, ...);
int	handle_formats(char format, va_list list);
int	ft_putstr(char *s);
int	ft_dec_tohexa(unsigned long n, char c);
int	ft_dec_tohexa_p(void *p);
int	ft_putnbr(long n);

#endif