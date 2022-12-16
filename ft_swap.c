/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <abensgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:12:03 by abensgui          #+#    #+#             */
/*   Updated: 2022/03/09 12:12:04 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_pos(t_list *a, int min, int max)
{
	int	i;

	i = 0;
	while (a)
	{
		if (a->content >= min && a->content <= max)
		{
			return (i);
		}
		i++;
		a = a->next;
	}
	return (i);
}

void	ft_push_a(t_list **a, t_list **b, t_vars *data)
{
	if ((*a)->content >= data->min && (*a)->content <= data->max)
	{
		if ((*a)->content < data->med)
		{
			ft_pb(a, b);
			ft_rb(b, 1);
		}
		else
			ft_pb(a, b);
		data->p--;
	}
	else if (data->pos <= size_l(*a) / 2)
		ft_ra(a, 1);
	else if (data->pos > size_l(*a) / 2)
		ft_rra(a, 1);
}

void	ft_swap(t_list **a, t_list **b)
{
	t_vars	*data;

	data = malloc(sizeof(t_vars));
	while (size_l(*a) > 5)
	{
		data->min = ft_minp(*a);
		data->max = ft_maxp(*a);
		data->med = ft_med(*a);
		data->p = ft_pushed(*a);
		data->pos = ft_pos(*a, data->min, data->max);
		while (data->p > 0)
		{
			ft_push_a(a, b, data);
		}
	}
	free(data);
	ft_swap5(a, b);
	ft_push_b(a, b);
}
