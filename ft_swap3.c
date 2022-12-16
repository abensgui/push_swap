/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <abensgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:12:10 by abensgui          #+#    #+#             */
/*   Updated: 2022/03/09 12:12:12 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	ft_max(t_list *t)
{
	int	i;
	int	max;
	int	j;

	j = 1;
	max = t->content;
	i = 1;
	while (t)
	{
		if (max < t->content)
		{
			max = t->content;
			i = j;
		}
		j++;
		t = t->next;
	}
	return (i);
}

void	pswap3(t_list **a)
{
	if (ft_max(*a) == 2)
	{
		if ((*a)->content < (*a)->next->next->content)
		{
			ft_rra(a, 1);
			ft_sa(*a, 1);
		}
		else
			ft_rra(a, 1);
	}
	else if (ft_max(*a) == 3)
	{
		if ((*a)->content > (*a)->next->content)
		{
			ft_sa(*a, 1);
		}
	}	
}

void	ft_swap3(t_list **a)
{
	if (ft_check_sort(*a) == 1)
		return ;
	if (ft_max(*a) == 1)
	{
		if ((*a)->next->content > (*a)->next->next->content)
		{
			ft_ra(a, 1);
			ft_sa(*a, 1);
		}
		else
			ft_ra(a, 1);
	}
	else
		pswap3(a);
}
