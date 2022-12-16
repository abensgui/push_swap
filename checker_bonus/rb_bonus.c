/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <abensgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:10:36 by abensgui          #+#    #+#             */
/*   Updated: 2022/03/10 14:50:51 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_rb(t_list **stack_b)
{
	t_list	*tmp;

	if (*stack_b != NULL && (*stack_b)->next != NULL)
	{
		tmp = *stack_b;
		(*stack_b) = (*stack_b)->next;
		tmp->next = NULL;
		ft_lstadd_back(stack_b, tmp);
	}
}
