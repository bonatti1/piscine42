/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonatti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 17:16:01 by lbonatti          #+#    #+#             */
/*   Updated: 2019/12/11 17:25:56 by lbonatti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_space(int i, char *str)
{
	while ((str[i] == '\f') || (str[i] == '\n') || (str[i] == ' ') ||
			(str[i] == '\t') || (str[i] == '\v') || (str[i] == '\r'))
		i++;
	return (i);
}

int		ft_is_signal(int i, int neg, char *str)
{
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
		{
			neg *= -1;
			i++;
		}
		else
			i++;
	}
	i = i * neg;
	return (i);
}

int		ft_atoi(char *str)
{
	int neg;
	int i;
	int answ;

	neg = 1;
	i = 0;
	i = ft_is_space(i, str);
	i = ft_is_signal(i, neg, str);
	if (i < 0)
	{
		i = i * -1;
		neg = -1;
	}
	answ = 0;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		answ = ((answ * 10) + (str[i] - 48));
		i++;
	}
	answ = answ * neg;
	return (answ);
}
