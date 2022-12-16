/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <abensgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:46:37 by abensgui          #+#    #+#             */
/*   Updated: 2022/03/10 14:31:15 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
//////////////////////////////
# include<unistd.h>
# include<stdlib.h>
# include <fcntl.h>
/////////////////////////////////

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}	t_list;

void	ft_lstadd_back(t_list **alst, t_list *new);
void	ft_lstadd_front(t_list **alst, t_list *new);
t_list	*ft_lstnew(int content);
int		ft_atoi(char *str);
int		size_l(t_list *a);

void	ft_sa(t_list *node);
void	ft_sb(t_list *node);
void	ft_ss(t_list *node_a, t_list *node_b);
void	ft_pa(t_list **stack_a, t_list **stack_b);
void	ft_pb(t_list **stack_b, t_list **stack_a);
void	ft_ra(t_list **stack_a);
void	ft_rb(t_list **stack_b);
void	ft_rr(t_list **stack_a, t_list **stack_b);
void	ft_rra(t_list **stack_a);
void	ft_rrb(t_list **stack_b);
void	ft_rrr(t_list **stack_a, t_list **stack_b);

int		ft_strcmp(char *s1, char *s2);

char	*ft_strjoin(char const *s1, char const *s2);
char	*get_next_line(int fd);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *sr);
size_t	ft_strlen(const char *s);
void	ft_dup(char **av);
#endif
