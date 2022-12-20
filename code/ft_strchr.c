/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:28:27 by rchbouki          #+#    #+#             */
/*   Updated: 2022/12/12 16:11:49 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *s, int c)
{
	char	l;
	char	*sub_set;

	sub_set = (char *)(s);
	l = (char)(c);
	while (*sub_set)
	{
		if (*sub_set == l)
			return (sub_set);
		sub_set++;
	}
	if (l == '\0')
		return (sub_set);
	return (NULL);
}
