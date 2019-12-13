/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonatti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 19:06:59 by lbonatti          #+#    #+#             */
/*   Updated: 2019/12/11 19:38:31 by lbonatti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_stdin(int res, int max_buf_size, int size, int file)
{
	char	res[max_buf_size];
	int		tam_lin;
	int		tam_col;
	int		**matrix;
	char	guarda_char[4];

	i = 0;
	size = read(0, res, max_buf_size);
	res[size] = '\0';
	tam_col = ft_strlen_col(res, 2);
	ft_save_char(res, tam_col, guarda_char);
	tam_lin = ft_atoi(res, tam_col);
	tam_col = ft_strlen_col(res, 1);
	matrix = (int**)malloc(sizeof(int*) * tam_lin);
	ft_populate_matrix(res, tam_col, matrix);
}
