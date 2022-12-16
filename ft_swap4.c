/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <abensgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:12:17 by abensgui          #+#    #+#             */
/*   Updated: 2022/03/09 12:12:19 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min(t_list *t)
{
	int	i;
	int	min;
	int	j;

	j = 1;
	min = t->content;
	i = 1;
	while (t)
	{
		if (min > t->content)
		{
			min = t->content;
			i = j;
		}
		j++;
		t = t->next;
	}
	return (i);
}

void	pswap_4(t_list **a, t_list**b)
{
	if (ft_min(*a) == 3)
	{
		ft_rra(a, 1);
		ft_rra(a, 1);
		ft_pb(a, b);
		ft_swap3(a);
		ft_pa(a, b);
	}
	else if (ft_min(*a) == 4)
	{
		ft_rra(a, 1);
		ft_pb(a, b);
		ft_swap3(a);
		ft_pa(a, b);
	}
}

void	ft_swap4(t_list **a, t_list**b)
{
	if (ft_check_sort(*a) == 1)
		return ;
	if (ft_min(*a) == 1)
	{
		ft_pb(a, b);
		ft_swap3(a);
		ft_pa(a, b);
	}
	else if (ft_min(*a) == 2)
	{
		ft_ra(a, 1);
		ft_pb(a, b);
		ft_swap3(a);
		ft_pa(a, b);
	}
	else
		pswap_4(a, b);
}
