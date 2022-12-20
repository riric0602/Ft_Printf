/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 15:35:57 by rchbouki          #+#    #+#             */
/*   Updated: 2022/12/12 17:19:17 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_write_c(char c, va_list param)
{
	if (c == 'c')
	{
		c = (va_arg(param, int));
		ft_putchar(c);
	}
	else
		ft_putchar(c);
	return (1);
}
