/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonatti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 20:33:06 by lbonatti          #+#    #+#             */
/*   Updated: 2019/11/26 18:20:11 by lbonatti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	aux1;
	int		aux;

	aux = 0;
	aux1 = '0';
	while (aux < 10)
	{
		write(1, &aux1, 1);
		aux++;
		aux1++;
	}
}