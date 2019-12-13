/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 16:29:56 by joguntij          #+#    #+#             */
/*   Updated: 2019/12/11 19:41:12 by lbonatti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/headers.h"
#include "../headers/ft.h"

int		main(int argc, char *argv[])
{
	char 	res[MAX_BUF_SIZE];
	int		tam_lin;
	int		tam_col;
	int		i;
	int		**matrix;
	char	guarda_char[4];

	i = 1;
	while (i < argc)
	{
		file = open(argv[i], O_RDONLY);
		size = read(file, res, MAX_BUF_SIZE);
		res[size] = '\0';
		tam_col = ft_strlen_col(res, 2);
		ft_save_char(res, tam_col, guarda_char);
		tam_lin = ft_atoi(res, tam_col);
		tam_col = ft_strlen_col(res, 1);
		matrix = (int**)malloc(sizeof(int*) * tam_lin);
		ft_populate_matrix(res, tam_col, matrix);
		print_max_sub_square(matrix, tam_lin, tam_col, guarda_char);
		ft_free_malloc(matrix, tam_lin);
		free(matrix);
		close(file);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
