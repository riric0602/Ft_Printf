/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:40:36 by rchbouki          #+#    #+#             */
/*   Updated: 2022/12/12 18:22:01 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr_base(unsigned long long nb, char *base, int *len)
{
	unsigned long long	i;
	int					res;

	i = 0;
	while (base[i])
		i++;
	if (nb >= i)
	{
		ft_putnbr_base(nb / i, base, len);
		ft_putnbr_base(nb % i, base, len);
	}
	else
	{
		*len += 1;
		ft_putchar(base[nb]);
	}
	res = *len;
	return (res);
}

int	ft_write_p(va_list param, char *base)
{
	unsigned long long	nb;
	int					*p;
	int					len;

	len = 2;
	p = &len;
	nb = va_arg(param, unsigned long long);
	return (ft_putnbr_base(nb, base, p));
}
