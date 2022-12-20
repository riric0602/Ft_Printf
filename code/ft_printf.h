/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 13:32:14 by rchbouki          #+#    #+#             */
/*   Updated: 2022/12/12 16:09:57 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
int		ft_write_c(char c, va_list	param);
int		ft_write_s(va_list param);
int		ft_write_d(va_list param, char *base, int test);
int		ft_write_p(va_list param, char *base);
void	ft_putchar(char c);
void	ft_putstr(char *s);
int		ft_strlen(char *s);
int		ft_isprint(int c);
char	*ft_strchr(const char *s, int c);

#endif