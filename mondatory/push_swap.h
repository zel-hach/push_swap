/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:49:20 by zel-hach          #+#    #+#             */
/*   Updated: 2022/05/30 14:03:12 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_list
{
	long long int	data;
	struct s_list	*next;
	int				index;
	int				index_b;
}	t_list;

typedef struct s_info
{
	t_list		*head;
	t_list		*tail;
	int			size;
}	t_info;

typedef struct s_info_b
{
	t_list	*head;
	t_list	*tail;
	int		size;
	int		first_time;
}	t_info_b;

/******************utile_push_swap************************/

char			*ft_strjoin(char const *s1, char const *s2);
char			**ft_split(char const *s, char c);
char			*ft_strdup(const char *s);
int				ft_isdigit(int c);
long long int	ft_atoi(const char *str);
void			ft_putstr(char *s);
int				ft_strcmp(const char *s1, const char *s2);
size_t			ft_strlen(const char *str);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_join_args(char **av);

/***********************instructions*******************/

void			pb(t_info_b *b, t_info *a);
void			pa(t_info_b *b, t_info *a);
void			rrb(t_info_b *a);
void			rra(t_info *a);
void			rb(t_info_b *info);
void			ra(t_info *info);
void			sb(t_info_b *info);
void			sa(t_info *info);
void			ss(t_info *info, t_info_b *infob);
void			rr(t_info_b *infob, t_info *info);
void			rrr(t_info_b *infob, t_info *info);

/**************************liste********************/

int				ft_lstsize(t_list *lst);
t_list			*ft_lstnew(long long int content);
void			ft_lstadd_back(t_list **alst, t_list *new, t_info *info);
void			init_stack_b(t_info_b *infob);

/********************sorting function***********************/

void			index_stack(t_info *info);
void			inedex_stack(t_info_b *infob);
void			sort_push_swap(t_info_b *infob, t_info *info);
void			sort_index_push_swap(t_info_b infob, t_info info);
void			sort_stack__b(t_info_b *infob, t_info *info,
					t_list temp, int midle);
void			sort_five(t_info_b *infob, t_info *info);
void			sort_three(t_info *info);
void			sort_final(t_info_b *infob, t_info *info);

/*************************** check erreur *******************/

int				is_integer(char **argv);
int				is_sorted(char **tab);
int				check_space(char **tab);
void			inedex_stack_a(t_info *infob);
int				check_big_integer(t_info *info);
int				is_sort_stack(t_info *info);
int				check_double(t_info *info);

/***********************free**************************/

void			free_tableau(int *tab);
void			ft_free_stack(t_info *info);

#endif