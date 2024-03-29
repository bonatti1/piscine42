/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_malloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 05:35:40 by joguntij          #+#    #+#             */
/*   Updated: 2019/12/11 19:34:59 by lbonatti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/headers.h"

void	ft_free_malloc(int **table, int tam)
{
	int i;

	i = 0;
	while (i < tam)
		free(table[i++]);
}
