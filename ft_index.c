/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <abensgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:11:13 by abensgui          #+#    #+#             */
/*   Updated: 2022/03/09 17:39:50 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	size_l(t_list *a)
{
	int	i;

	i = 0;
	while (a)
	{
		i++;
		a = a->next;
	}
	return (i);
}

int	*ent_tab(t_list *a)
{
	int	i;
	int	size;
	int	*p;

	size = size_l(a);
	i = 0;
	p = malloc(size * sizeof(int));
	while (a)
	{
		p[i] = a->content;
		a = a->next;
		i++;
	}
	return (p);
}

int	*sort_tab(t_list *a)
{
	int	*p;
	int	i;
	int	j;
	int	t;
	int	size;

	size = size_l(a);
	p = ent_tab(a);
	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (p[i] > p[j])
			{
				t = p[i];
				p[i] = p[j];
				p[j] = t;
			}
			j++;
		}
		i++;
	}
	return (p);
}

void	ft_index(t_list **a)
{
	int		*t;
	t_list	*tmp;
	int		i;
	int		size;

	tmp = *a;
	size = size_l(tmp);
	i = 0;
	t = sort_tab(*a);
	while (tmp)
	{
		i = 0;
		while (i < size)
		{
			if (t[i] == tmp->content)
			{
				tmp->content = i;
				break ;
			}
			i++;
		}
		tmp = tmp->next;
	}
	free(t);
}
