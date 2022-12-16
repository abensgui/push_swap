/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <abensgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:07:10 by abensgui          #+#    #+#             */
/*   Updated: 2022/03/10 13:10:23 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rrb(t_list **stack_b, int s)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (*stack_b != NULL && (*stack_b)->next != NULL)
	{
		tmp = *stack_b;
		while (tmp->next->next)
		{
			tmp = tmp->next;
		}
		tmp2 = tmp;
		tmp = tmp->next;
		tmp2->next = NULL;
		ft_lstadd_front(stack_b, tmp);
		tmp = *stack_b;
		if (s == 1)
			write(1, "rrb\n", 4);
	}
}
