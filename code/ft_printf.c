/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 13:34:33 by rchbouki          #+#    #+#             */
/*   Updated: 2022/12/12 18:51:43 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_fullstr(const char *str)
{
	int	len;

	len = ft_strlen((char *)str);
	write(1, str, len);
	return (len);
}

static int	ft_options(char c, va_list param)
{
	int	res;

	res = 0;
	if (c == 'c' || c == '%')
		res = ft_write_c(c, param);
	else if (c == 's')
		res = ft_write_s(param);
	else if (c == 'p')
	{
		write(1, "0x", 2);
		res = ft_write_p(param, "0123456789abcdef");
	}
	else if (c == 'd' || c == 'i')
		res = ft_write_d(param, "0123456789", 0);
	else if (c == 'u')
		res = ft_write_d(param, "0123456789", 1);
	else if (c == 'x')
		res = ft_write_d(param, "0123456789abcdef", 1);
	else if (c == 'X')
		res = ft_write_d(param, "0123456789ABCDEF", 1);
	return (res);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		cp;
	va_list	param;

	i = 0;
	cp = 0;
	if (!ft_strchr(str, '%'))
		return (ft_fullstr(str));
	va_start(param, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			cp += ft_options(str[i + 1], param);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			cp++;
		}
		i++;
	}
	va_end(param);
	return (cp);
}
