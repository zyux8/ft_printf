/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helpers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaker <ohaker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 18:27:47 by ohaker            #+#    #+#             */
/*   Updated: 2024/11/25 18:22:04 by ohaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <string.h>

// int	ft_find_format(char *format)
// {
// 	size_t	x;

// 	x = 0;

// 	ft_strchr(format, '%');
// }

void	*ft_ident_format(char format)
{
	if (format == 'c')
		return (0);
	else if (format == 's')
		return (0);
	else if (format == 'p')
		return (0);
	else if (format == 'd' || format == 'i')
		return (0);
	else if (format == 'x')
		return (0);
	else if (format == 'X')
		return (0);
	else if (format == '%')
		return (strdup("%"));
	return (NULL);
}
