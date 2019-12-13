/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonatti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 14:16:26 by lbonatti          #+#    #+#             */
/*   Updated: 2019/12/07 14:48:27 by lbonatti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int cont;

	cont = 0;
	while (cont < size - 1)
	{
		dest[cont] = src[cont];
		cont++;
	}
	dest[cont] = '\0';
	while (src)
	{
		i++;
	}
	return (i);
}
