/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <abensgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:10:26 by abensgui          #+#    #+#             */
/*   Updated: 2022/03/09 12:10:26 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if ((*stack_b) == NULL)
		return ;
	tmp = *stack_b;
	(*stack_b) = (*stack_b)->next;
	tmp->next = NULL;
	ft_lstadd_front(stack_a, tmp);
}
