/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonatti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 15:47:34 by lbonatti          #+#    #+#             */
/*   Updated: 2019/12/09 16:16:41 by lbonatti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rushlib.h"

int		error(void)
{
	write(1, "Error\n", 6);
	return (0);
}

int		main(int argc, char **argv)
{
	int aux;

	aux = 0;
	if (argc != 2)
		return (error());
	while (argv[1][aux] != '\0')
	{
		if (argv[1][aux] < '0' || argv[1][aux] > '9')
			return (error());
		aux++;
	}
	aux = conta3(argv[1]) - 1;
	while (aux > 0)
	{
		print(trata3(argv[1]));
		if (print(trata3(argv[1])))
			millions(aux);
	}
	return (0);
}
