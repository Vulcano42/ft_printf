/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thialima <thialima@student.42.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 23:37:42 by thialima          #+#    #+#             */
/*   Updated: 2026/07/24 00:37:30 by thialima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_conversion(const char type, va_list vargs)
{
	if (type == 'c')
		return (ft_putchar(va_arg(vargs, int)));
	if (type == 's')
		return (ft_putstr(va_arg(vargs, char *)));
	if (type == 'p')
		return (ft_putptr(va_arg(vargs, void *)));
	if ((type == 'd') || (type == 'i'))
		return (ft_putnbr(va_arg(vargs, int)));
	if (type == 'u')
		return (ft_putnbr(va_arg(vargs, unsigned int)));
	if ((type == 'x') || (type == 'X'))
		return (ft_brazil_dream(va_arg(vargs, unsigned int), type));
	if (type == '%')
		return (ft_putchar('%'));
	return (-1);
}
