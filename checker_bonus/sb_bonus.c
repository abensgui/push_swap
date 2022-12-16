/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <abensgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:10:55 by abensgui          #+#    #+#             */
/*   Updated: 2022/03/10 12:53:05 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_sb(t_list *node)
{
	int	tmp;

	if (node != NULL && node->next != NULL)
	{
		tmp = node->next->content;
		node->next->content = node->content;
		node->content = tmp;
	}
}
