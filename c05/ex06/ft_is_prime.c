/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonatti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 14:53:05 by lbonatti          #+#    #+#             */
/*   Updated: 2019/12/12 16:50:48 by lbonatti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;
	int aux;

	i = 3;
	aux = nb / 2;
	if (nb < 2)
		return (0);
	if (nb % 2 == 0)
		return (0);
	while (i <= aux)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}
