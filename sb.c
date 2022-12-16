/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <abensgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 13:29:01 by abensgui          #+#    #+#             */
/*   Updated: 2022/03/10 13:08:59 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sb(t_list *node, int s)
{
	int	tmp;

	if (node != NULL && node->next != NULL)
	{
		tmp = node->next->content;
		node->next->content = node->content;
		node->content = tmp;
		if (s == 1)
			write(1, "sb\n", 3);
	}
}
