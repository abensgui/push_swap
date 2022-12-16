/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <abensgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:14:51 by abensgui          #+#    #+#             */
/*   Updated: 2022/03/10 13:10:04 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_list **stack_a, int s)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (*stack_a != NULL && (*stack_a)->next != NULL)
	{
		tmp = *stack_a;
		while (tmp->next->next)
		{
			tmp = tmp->next;
		}
		tmp2 = tmp;
		tmp = tmp->next;
		tmp2->next = NULL;
		ft_lstadd_front(stack_a, tmp);
		tmp = *stack_a;
		if (s == 1)
			write(1, "rra\n", 4);
	}
}
