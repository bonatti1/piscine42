/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonatti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 12:46:00 by lbonatti          #+#    #+#             */
/*   Updated: 2019/12/12 16:50:01 by lbonatti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int i;
	int aux;

	aux = 1;
	i = 0;
	while (i < nb)
	{
		i++;
		aux = aux * i;
	}
	return (aux);
}
