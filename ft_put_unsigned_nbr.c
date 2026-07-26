/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_nbr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thialima <thialima@student.42.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 18:54:34 by thialima          #+#    #+#             */
/*   Updated: 2026/07/24 19:20:30 by thialima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_unsigned_nbr(unsigned int nb)

{
	char	c;
	int		len;

	len = 0;
	if (nb >= 10)
		len += ft_put_unsigned_nbr(nb / 10);
	c = (nb % 10) + '0';
	write (1, &c, 1);
	len++;
	return (len);
}
