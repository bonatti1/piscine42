/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonatti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 18:10:02 by lbonatti          #+#    #+#             */
/*   Updated: 2019/12/12 16:34:50 by lbonatti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int aux;
	int i;

	i = 1;
	aux = 0;
	while (i < argc)
	{
		while ((argv[i])[aux] != '\0')
			aux++;
		write(1, argv[i], aux);
		aux = 0;
		write(1, "\n", 1);
		i++;
	}
}
