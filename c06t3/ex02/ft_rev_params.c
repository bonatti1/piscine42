/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonatti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 18:26:01 by lbonatti          #+#    #+#             */
/*   Updated: 2019/12/12 16:35:51 by lbonatti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int aux;

	aux = 0;
	while (argc > 1)
	{
		while ((argv[argc - 1])[aux] != '\0')
		{
			write(1, &(argv[argc - 1])[aux], 1);
			aux++;
		}
		write(1, "\n", 1);
		aux = 0;
		argc--;
	}
	return (0);
}
