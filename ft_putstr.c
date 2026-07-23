/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thialima <thialima@student.42.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 04:12:26 by thialima          #+#    #+#             */
/*   Updated: 2026/07/22 21:21:32 by thialima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_putstr(char *str)


{
	int	i;
	
	if (!str)
	{
		write (1,"(null)",6);
		return (6);
	}
	i = 0;
	while(str[i])
		i++;
	write (1,str,i);
	return(i);
}
