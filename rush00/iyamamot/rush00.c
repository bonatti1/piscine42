/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamamot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 09:35:14 by iyamamot          #+#    #+#             */
/*   Updated: 2019/11/24 13:27:14 by iyamamot         ###   ########.fr       */
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
			ft_putchar('|');
			i = 0;
			while (i < (x - 2))
			{
				ft_putchar(' ');
				++i;
			}
			if (x > 1)
				ft_putchar('|');
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
		ft_putchar('o');
		i = 0;
		while (i < (x - 2))
		{
			ft_putchar('-');
			++i;
		}
		if (x > 1)
			ft_putchar('o');
	}
	if (x >= 1 && y > 0)
		ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if (x > 0 && y > 0)
		ft_putchar('o');
	i = 0;
	while (i < (x - 2) && y > 0)
	{
		ft_putchar('-');
		i++;
	}
	if (x > 1 && y > 0)
		ft_putchar('o');
	meio(x, y);
	fim(x, y);
}
