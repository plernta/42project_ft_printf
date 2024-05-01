/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plesukja <plesukja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 13:23:41 by plesukja          #+#    #+#             */
/*   Updated: 2024/04/29 15:55:05 by plesukja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

void	ft_putchar_count(char c, int *length);
void	ft_putstr_count(char *str, int *length);
char	ft_toupper(char c);
void	ft_putptr(size_t ptr, int *length);
void	ft_putnum(long long int nbr, int *length, int base, char d_i_x_or_X);
void	fmt_convert(const char form, va_list args, int *length);
int		ft_printf(const char *fmt, ...);

#endif
