/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_brazil_dream.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thialima <thialima@student.42.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 21:55:54 by thialima          #+#    #+#             */
/*   Updated: 2026/07/23 22:11:00 by thialima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_brazil_dream(unsigned long nbr, char up)

{
	int		len;
	char	*base;

	len = 0;
	if (up == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (nbr > 15)
		len += ft_brazil_dream(nbr / 16, up);
	write(1, &base[nbr % 16], 1);
	len++;
	return (len);
}
