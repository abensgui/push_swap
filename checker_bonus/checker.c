/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <abensgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:08:46 by abensgui          #+#    #+#             */
/*   Updated: 2022/03/10 15:05:47 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static int	ft_check_sort(t_list *t)
{
	while (t->next)
	{
		if (t->content > t->next->content)
		{
			return (0);
		}
		t = t->next;
	}
	return (1);
}

void	ft_checker1(t_list **a, t_list **b, char *p)
{
	if (ft_strcmp(p, "rrb\n"))
		ft_rrb(b);
	else if (ft_strcmp(p, "rrr\n"))
		ft_rrr(a, b);
	else if (ft_strcmp(p, "sa\n"))
		ft_sa(*a);
	else if (ft_strcmp(p, "sb\n"))
		ft_sb(*b);
	else if (ft_strcmp(p, "ss\n"))
		ft_ss(*a, *b);
	else
	{
		write(1, "Error\n", 6);
		exit(1);
	}
}

void	ft_checker(t_list **a, t_list **b, char *p)
{
	if (ft_strcmp(p, "pa\n"))
		ft_pa(a, b);
	else if (ft_strcmp(p, "pb\n"))
		ft_pb(a, b);
	else if (ft_strcmp(p, "ra\n"))
		ft_ra(a);
	else if (ft_strcmp(p, "rb\n"))
		ft_rb(b);
	else if (ft_strcmp(p, "rr\n"))
		ft_rr(a, b);
	else if (ft_strcmp(p, "rra\n"))
		ft_rra(a);
	else
		ft_checker1(a, b, p);
}

void	check_in(t_list **stack_a, t_list **stack_b)
{
	char	*p;

	p = get_next_line(0);
	while (p)
	{
		ft_checker(stack_a, stack_b, p);
		free(p);
		p = get_next_line(0);
	}
}

int	main(int ac, char **av)
{
	int		i;
	t_list	*tmp;
	t_list	*stack_a;
	t_list	*stack_b;

	stack_b = NULL;
	i = 1;
	if (ac > 1)
	{
		ft_dup(av);
		while (av[i])
		{
			tmp = ft_lstnew(ft_atoi(av[i]));
			ft_lstadd_back(&stack_a, tmp);
			i++;
		}
		check_in(&stack_a, &stack_b);
		if (ft_check_sort(stack_a) == 1 && size_l(stack_b) == 0)
			write(1, "OK\n", 3);
		else
			write(1, "KO\n", 3);
	}
	else
		return (0);
}
