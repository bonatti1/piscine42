/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonatti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 15:47:34 by lbonatti          #+#    #+#             */
/*   Updated: 2019/12/08 14:45:50 by lbonatti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		conta3(char *str);

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
	printf("%d", conta3(argv[1]));
	// se der certo nossa função vai aqui ela faz tudo e depois passa ali pra baixo e retorna 0
	return (0);
}
