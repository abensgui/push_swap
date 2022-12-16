/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <abensgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:10:33 by abensgui          #+#    #+#             */
/*   Updated: 2022/03/10 14:50:44 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_ra(t_list **stack_a)
{
	t_list	*tmp;

	if (*stack_a != NULL && (*stack_a)->next != NULL)
	{
		tmp = *stack_a;
		(*stack_a) = (*stack_a)->next;
		tmp->next = NULL;
		ft_lstadd_back(stack_a, tmp);
	}
}
