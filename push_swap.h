/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <abensgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 12:56:08 by abensgui          #+#    #+#             */
/*   Updated: 2022/03/10 14:31:06 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}	t_list;
typedef struct vars
{
	int	p;
	int	min;
	int	max;
	int	med;
	int	pos;
}	t_vars;
t_list	*ft_lstnew(int content);
void	ft_lstadd_back(t_list **alst, t_list *new);
void	ft_lstadd_front(t_list **alst, t_list *new);
int		ft_atoi(char *str);
int		ft_isdigit(int c);

void	ft_sa(t_list *node, int s);
void	ft_sb(t_list *node, int s);
void	ft_ss(t_list *node_a, t_list *node_b);
void	ft_pa(t_list **stack_a, t_list **stack_b);
void	ft_pb(t_list **stack_b, t_list **stack_a);
void	ft_ra(t_list **stack_a, int s);
void	ft_rb(t_list **stack_b, int s);
void	ft_rr(t_list **stack_a, t_list **stack_b);
void	ft_rra(t_list **stack_a, int s);
void	ft_rrb(t_list **stack_b, int s);
void	ft_rrr(t_list **stack_a, t_list **stack_b);

void	ft_swap3(t_list **a);
void	ft_swap4(t_list **a, t_list **b);
void	ft_swap5(t_list **a, t_list **b);
void	ft_index(t_list **a);
int		size_l(t_list *a);
int		ft_min(t_list *t);
int		ft_max(t_list *t);
int		ft_check_sort(t_list *t);

int		ft_pushed(t_list *a);
int		ft_maxp(t_list *a);
int		ft_med(t_list *a);
int		ft_minp(t_list *a);
void	ft_swap(t_list **a, t_list **b);

void	ft_push_b(t_list **a, t_list **b);
void	free_list(t_list **stack);
#endif