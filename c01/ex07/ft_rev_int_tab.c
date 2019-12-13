/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonatti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 15:25:47 by lbonatti          #+#    #+#             */
/*   Updated: 2019/11/29 15:18:57 by lbonatti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int aux;
	int i;
	int j;

	j = size - 1;
	i = 0;
	while (i <= j)
	{
		aux = tab[i];
		tab[i] = tab[j];
		tab[j] = aux;
		i++;
		j--;
	}
}
