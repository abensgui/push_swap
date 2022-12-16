/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <abensgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:16:31 by abensgui          #+#    #+#             */
/*   Updated: 2022/03/10 13:11:26 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rb(t_list **stack_b, int s)
{
	t_list	*tmp;

	if (*stack_b != NULL && (*stack_b)->next != NULL)
	{
		tmp = *stack_b;
		(*stack_b) = (*stack_b)->next;
		tmp->next = NULL;
		ft_lstadd_back(stack_b, tmp);
		if (s == 1)
			write(1, "rb\n", 3);
	}
}
