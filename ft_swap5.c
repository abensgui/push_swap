/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <abensgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:12:24 by abensgui          #+#    #+#             */
/*   Updated: 2022/03/09 12:12:26 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pswap_5(t_list **a, t_list **b)
{
	if (ft_min(*a) == 4)
	{
		ft_rra(a, 1);
		ft_rra(a, 1);
		ft_pb(a, b);
		ft_swap4(a, b);
		ft_pa(a, b);
	}
	else if (ft_min(*a) == 5)
	{
		ft_rra(a, 1);
		ft_pb(a, b);
		ft_swap4(a, b);
		ft_pa(a, b);
	}
}

void	ft_swap5(t_list **a, t_list**b)
{
	if (ft_check_sort(*a) == 1)
		return ;
	if (ft_min(*a) == 1)
	{
		ft_pb(a, b);
		ft_swap4(a, b);
		ft_pa(a, b);
	}
	else if (ft_min(*a) == 2)
	{
		ft_ra(a, 1);
		ft_pb(a, b);
		ft_swap4(a, b);
		ft_pa(a, b);
	}
	else if (ft_min(*a) == 3)
	{
		ft_ra(a, 1);
		ft_ra(a, 1);
		ft_pb(a, b);
		ft_swap4(a, b);
		ft_pa(a, b);
	}
	else
		pswap_5(a, b);
}
