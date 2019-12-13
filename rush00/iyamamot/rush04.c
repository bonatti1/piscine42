/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamamot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 16:02:58 by iyamamot          #+#    #+#             */
/*   Updated: 2019/11/24 18:31:32 by lbonatti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	meio(int x, int y)
{
	int i;
	int contador;

	if (y > 1)
	{
		contador = 0;
		while (contador < (y - 2))
		{
			ft_putchar('\n');
			ft_putchar('B');
			i = 0;
			while (i < (x - 2))
			{
				ft_putchar(' ');
				++i;
			}
			if (x > 1)
				ft_putchar('B');
			++contador;
		}
	}
}

void	fim(int x, int y)
{
	int i;

	if (x > 0 && y > 1)
	{
		ft_putchar('\n');
		ft_putchar('C');
		i = 0;
		while (i < (x - 2))
		{
			ft_putchar('B');
			++i;
		}
		if (x > 1)
			ft_putchar('A');
	}
	if (x >= 1 && y > 0)
		ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		i;

	if (x > 0 && y > 0)
		ft_putchar('A');
	i = 0;
	while (i < (x - 2) && y > 0)
	{
		ft_putchar('B');
		++i;
	}
	if (x > 1 && y > 0)
		ft_putchar('C');
	meio(x, y);
	fim(x, y);
}
