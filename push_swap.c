/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <abensgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:00:58 by abensgui          #+#    #+#             */
/*   Updated: 2022/03/10 15:06:33 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_dup(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = i + 1;
		while (av[j])
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
			{
				write(1, "Error\n", 6);
				exit(1);
			}
			j++;
		}
		i++;
	}
}

int	ft_check_sort(t_list *t)
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

void	push_swap(t_list **stack_a, t_list **stack_b, int ac)
{
	if (ft_check_sort(*stack_a) == 1)
		exit(1);
	if (ac == 3)
		ft_sa(*stack_a, 1);
	else if (ac == 4)
		ft_swap3(stack_a);
	else if (ac == 5)
		ft_swap4(stack_a, stack_b);
	else if (ac == 6)
		ft_swap5(stack_a, stack_b);
	else
		ft_swap(stack_a, stack_b);
}

int	main(int ac, char **av)
{
	int		i;
	t_list	*tmp;
	t_list	*stack_a;
	t_list	*stack_b;

	i = 1;
	if (ac > 1)
	{
		ft_dup(av);
		while (i < ac)
		{
			tmp = ft_lstnew(ft_atoi(av[i]));
			ft_lstadd_back(&stack_a, tmp);
			i++;
		}
		ft_index(&stack_a);
		push_swap(&stack_a, &stack_b, ac);
		free_list(&stack_a);
	}
	else
		return (0);
}
