/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <abensgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:12:33 by abensgui          #+#    #+#             */
/*   Updated: 2022/03/09 12:12:34 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_pushed(t_list *a)
{
	int	v;

	if (size_l(a) <= 100)
	{
		v = (size_l(a) - 5) / 3 + 1;
	}
	else
		v = (size_l(a) - 5) / 5 + 1;
	return (v);
}

int	ft_maxp(t_list *a)
{
	int	v;

	v = (ft_pushed(a) + ft_minp(a)) - 1;
	return (v);
}

int	ft_med(t_list *a)
{
	int	v;

	v = (ft_maxp(a) + ft_minp(a)) / 2;
	return (v);
}

int	ft_minp(t_list *a)
{
	int	min;

	min = a->content;
	while (a)
	{
		if (min > a->content)
		{
			min = a->content;
		}
		a = a->next;
	}
	return (min);
}

void	free_list(t_list **stack)
{
	t_list	*tmp;

	while (*stack)
	{
		tmp = *stack;
		(*stack) = (*stack)->next;
		free(tmp);
	}
}
