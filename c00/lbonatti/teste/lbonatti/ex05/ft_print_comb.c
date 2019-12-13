/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonatti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 14:51:44 by lbonatti          #+#    #+#             */
/*   Updated: 2019/11/24 13:08:47 by lbonatti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char n[3];

	n[0] = '0';
	n[1] = '1';
	n[2] = '2';
	while (n[2] <= '9')
	{
		write(1, &n, 3);
		n[2]++;
		if (n[2] > '9')
		{
			n[1]++;
			n[2] = n[1] + 1;
			if (n[1] > '8')
			{
				n[0]++;
				n[1] = n[0] + 1;
				n[2] = n[1] + 1;
			}
		}
		if (n[0] != '8')
		{
			write(1, ", ", 2);
		}
	}
}
