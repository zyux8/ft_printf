/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaker <ohaker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:02:37 by ohaker            #+#    #+#             */
/*   Updated: 2024/11/27 20:11:19 by ohaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(LIBFTPRINTF_H)
# define LIBFTPRINTF_H
# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_def_format(const char format, va_list args);
int		ft_printf(const char *format, ...);
void	ft_print_hex(unsigned long ptr);
void	ft_print_hex_upp(unsigned long ptr);
void	ft_putunsignbr(unsigned int n);

#endif // LIBFTPRINTF_H
