/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonatti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 18:02:50 by lbonatti          #+#    #+#             */
/*   Updated: 2019/12/03 19:53:31 by lbonatti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_isn_printable(char str)
{
	if (str > 126 || str < 32)
		return (1);
	return (0);
}

void	hexadecimal(int str)
{
	int hexa;

	if (str > 15)
		hexadecimal(str / 16);
	hexa = (str % 16);
	if (hexa < 10)
		hexa += 48;
	else if (hexa == 10)
		hexa = 97;
	else if (hexa == 11)
		hexa = 98;
	else if (hexa == 12)
		hexa = 99;
	else if (hexa == 13)
		hexa = 100;
	else if (hexa == 14)
		hexa = 101;
	else
		hexa = 102;
	write(1, &hexa, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_str_isn_printable(str[i]))
		{
			write(1, "\\0", 2);
			hexadecimal(str[i]);
			i++;
		}
		write(1, &str[i], 1);
		i++;
	}
}
