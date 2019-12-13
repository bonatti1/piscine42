/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonatti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 22:02:30 by lbonatti          #+#    #+#             */
/*   Updated: 2019/11/26 17:59:42 by lbonatti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	recurso(int nb)
{
	int	mod;

	if (nb > 9)
		recurso(nb / 10);
	mod = (nb % 10) + 48;
	write(1, &mod, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-", 1);
		nb = (nb / 10) * -1;
		recurso(nb);
		write(1, "8", 1);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
		recurso(nb);
	}
	else
		recurso(nb);
}
