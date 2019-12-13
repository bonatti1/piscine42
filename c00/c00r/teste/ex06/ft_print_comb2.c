/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonatti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 19:49:56 by lbonatti          #+#    #+#             */
/*   Updated: 2019/11/26 18:02:24 by lbonatti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	prin(int *n)
{
	int aux0;
	int aux1;
	int aux2;
	int aux3;

	aux0 = (n[0] / 10) + 48;
	aux1 = (n[0] % 10) + 48;
	aux2 = (n[1] / 10) + 48;
	aux3 = (n[1] % 10) + 48;
	write(1, &aux0, 1);
	write(1, &aux1, 1);
	write(1, " ", 1);
	write(1, &aux2, 1);
	write(1, &aux3, 1);
	if (n[0] != 98)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int n[2];
	int aux0;
	int aux1;
	int aux2;
	int aux3;

	n[0] = 0;
	n[1] = 1;
	while (n[0] <= 98)
	{
		while (n[1] <= 99)
		{
			if (n[0] < n[1])
			{
				aux0 = (n[0] / 10) + 48;
				aux1 = (n[0] % 10) + 48;
				aux2 = (n[1] / 10) + 48;
				aux3 = (n[1] % 10) + 48;
			}
			prin(n);
			n[1]++;
		}
		n[0]++;
		n[1] = n[0] + 1;
	}
}
