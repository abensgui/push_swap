/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <abensgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:11:56 by abensgui          #+#    #+#             */
/*   Updated: 2022/03/09 12:11:58 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_chlast(t_list *a)
{
	while (a->next)
		a = a->next;
	a->content = -1;
}

int	ft_search_next(int c, t_list *b)
{
	int	i;

	i = 1;
	while (b)
	{
		if (c == b->content)
		{
			return (i);
		}
		b = b->next;
		i++;
	}
	return (-1);
}

void	ft_ab(t_list **a, t_list **b, int size_b, int *c)
{
	int	p;

	p = ft_search_next((*a)->content - 1, *b);
	if (p != -1)
	{
		while (1)
		{
			if (p <= (size_b / 2))
				ft_rb(b, 1);
			else
				ft_rrb(b, 1);
			if ((*a)->content -1 == (*b)->content)
			{
				ft_pa(a, b);
				(*c)--;
				break ;
			}
		}
	}
}

int	get_last(t_list **a, t_list **b, int *c)
{
	int		size_b;
	int		last_a;
	t_list	*tmp;

	tmp = *a;
	while (tmp->next)
		tmp = tmp->next;
	last_a = tmp->content;
	size_b = size_l(*b);
	if ((*a)->content -1 == (*b)->content)
	{
		ft_pa(a, b);
		(*c)--;
	}
	else if (last_a < (*b)->content && (*a)->content > (*b)->content)
	{
		ft_pa(a, b);
		ft_ra(a, 1);
		(*c)--;
	}
	else
		ft_ab(a, b, size_b, c);
	return (last_a);
}

void	ft_push_b(t_list **a, t_list **b)
{
	int	last_a;
	int	c;

	c = size_l(*b);
	ft_chlast(*a);
	while (c > 0)
	{
		last_a = get_last(a, b, &c);
		if ((*a)->content -1 == last_a && (*a)->content -1 != -1)
			ft_rra(a, 1);
	}
	while ((*a)->content != 0)
		ft_rra(a, 1);
}
