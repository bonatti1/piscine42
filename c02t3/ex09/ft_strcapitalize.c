/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonatti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 19:39:44 by lbonatti          #+#    #+#             */
/*   Updated: 2019/12/06 20:28:42 by lbonatti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_strupcase(char str)
{
	if (str >= 'a' && str <= 'z')
		str -= 32;
	return (str);
}

char	ft_strlowcase(char str)
{
	str += 32;
	return (str);
}

int		is_alphanumeric(char str)
{
	if (str >= '0' && str <= '9')
		return (1);
	else if (str >= 'a' && str <= 'z')
		return (2);
	else if (str >= 'A' && str <= 'Z')
		return (3);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (is_alphanumeric(str[i]) >= 2 && j == 0)
		{
			j = 1;
			str[i] = ft_strupcase(str[i]);
		}
		else if (is_alphanumeric(str[i]) == 1)
			j = 1;
		else if (is_alphanumeric(str[i]) == 3 && j == 1)
			str[i] = ft_strlowcase(str[i]);
		else if (is_alphanumeric(str[i]) == 0)
			j = 0;
		i++;
	}
	return (str);
}
