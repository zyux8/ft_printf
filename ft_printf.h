/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaker <ohaker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:02:37 by ohaker            #+#    #+#             */
/*   Updated: 2024/11/29 18:40:46 by ohaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(FT_PRINTF_H)
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

int		ft_def_format(const char format, va_list args, int y);
int		ft_print_hex_upp(unsigned int ptr, int y);
int		ft_print_hex(unsigned int ptr, int y);
int		ft_printf(const char *format, ...);
int		ft_print_ptr(unsigned long ptr, int y);
void	ft_putchar(char c);
int		ft_putnbry(int n, int y);
void	ft_putstr(char *str);
int		ft_putstry(char *str, int y);
int		ft_putunsignbr(unsigned int n, int y);

#endif // FT_PRINTF_H
