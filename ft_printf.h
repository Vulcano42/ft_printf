/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thialima <thialima@student.42.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 00:52:34 by thialima          #+#    #+#             */
/*   Updated: 2026/07/24 20:17:41 by thialima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);

int	ft_conversion(const char type, va_list vargs);

int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(long nbr);
int	ft_putptr(void *ptr);
int	ft_put_unsigned_nbr(unsigned int nb);
int	ft_brazil_dream(unsigned long nbr, char up);

#endif
