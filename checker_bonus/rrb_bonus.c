/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <abensgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:10:46 by abensgui          #+#    #+#             */
/*   Updated: 2022/03/09 22:26:05 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_rrb(t_list **stack_b)
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
	}
}
