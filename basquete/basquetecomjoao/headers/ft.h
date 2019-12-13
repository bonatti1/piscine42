/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 14:43:44 by joguntij          #+#    #+#             */
/*   Updated: 2019/12/11 19:40:06 by lbonatti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_populate_matrix(char *str, int col, int **mat);
int		ft_strlen_col(char *str, int check);
void	print_max_sub_square(int **table, int t_l, int t_c, char *save_char);
int		ft_min(int a, int b, int c);
int		ft_atoi(char *str, int tam);
void	ft_save_char(char *str, int tam, char *save);
void	ft_free_malloc(int **table, int tam);
void	ft_putchar(char c);

#endif
