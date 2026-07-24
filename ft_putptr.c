/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thialima <thialima@student.42.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 20:01:30 by thialima          #+#    #+#             */
/*   Updated: 2026/07/23 22:19:31 by thialima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putptr(void *ptr)
{
	int	len;
	int	aux;

	len = 0;
	aux = 0;
	if (!ptr)
		return (ft_putstr("(nil)"));
	ft_putstr("0x");
	len += 2;
	aux = ft_brazil_dream((unsigned long)ptr, 'x');
	len += aux;
	return (len);
}
