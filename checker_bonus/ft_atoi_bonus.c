/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <abensgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:08:53 by abensgui          #+#    #+#             */
/*   Updated: 2022/03/10 13:07:53 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

unsigned int	ft_cal(char *str, int i, int *check)
{
	unsigned int	nb;

	nb = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			if (nb > 2147483648)
			{
				write(1, "Error\n", 6);
				exit(1);
			}
			nb = (nb * 10) + (str[i] - '0');
			*check = 1;
		}
		else
		{
			write(1, "Error\n", 6);
			exit(1);
		}
		i++;
	}
	return (nb);
}

int	ft_atoi(char *str)
{
	int				i;
	int				s;
	unsigned long	nb;
	int				check;

	check = 0;
	i = 0;
	s = 1;
	nb = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	nb = ft_cal(str, i, &check);
	if (check == 1 && ((nb <= 2147483647 && s == 1)
			|| (nb <= 2147483648 && s == -1)))
		return ((int )(nb * s));
	else
	{
		write(1, "Error\n", 6);
		exit(1);
	}
}
