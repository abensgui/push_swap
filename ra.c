/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <abensgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:18:05 by abensgui          #+#    #+#             */
/*   Updated: 2022/03/10 13:11:16 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_list **stack_a, int s)
{
	t_list	*tmp;

	if (*stack_a != NULL && (*stack_a)->next != NULL)
	{
		tmp = *stack_a;
		(*stack_a) = (*stack_a)->next;
		tmp->next = NULL;
		ft_lstadd_back(stack_a, tmp);
		if (s == 1)
			write(1, "ra\n", 3);
	}
}
