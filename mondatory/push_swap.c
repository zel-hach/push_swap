/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:48:13 by zel-hach          #+#    #+#             */
/*   Updated: 2022/05/30 14:23:48 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_element(char **tab, t_list *a, t_info *info)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (tab[i])
	{
		ft_lstadd_back(&a, ft_lstnew(ft_atoi(tab[i])), info);
		a->index = -1;
		if (i == 0)
			info->head = a;
		info->size++;
		i++;
	}
}

void	init_stack_b(t_info_b *infob)
{
	infob->first_time = -1;
	infob->size = -1;
	infob->head = NULL;
	infob->tail = NULL;
}

void	sort_final(t_info_b *infob, t_info *info)
{
	if (info->size <= 3)
		sort_three(info);
	else if (info->size <= 5)
		sort_five(infob, info);
	else
		sort_push_swap(infob, info);
}

void	push_swap_final(char **tableau, t_info *info, t_info_b *infob)
{
	t_list	*a;

	info->size = 0;
	a = NULL;
	if (is_integer(tableau) == 0)
		ft_putstr("erreur");
	else
	{
		push_element(tableau, a, info);
		if (check_double(info) == 0 || check_big_integer(info) == 0)
			ft_putstr("erreur");
		else if (is_sort_stack(info) == 0)
			sort_final(infob, info);
	}
}

int	main(int argc, char **argv)
{
	t_info		info;
	t_info_b	infob;
	char		**tableau;

	argc = 0;
	tableau = ft_join_args(&argv[0]);
	init_stack_b(&infob);
	if (check_space(argv) == 0)
		ft_putstr("erreur");
	else
		push_swap_final(tableau, &info, &infob);
	ft_free_stack(&info);
	return (0);
}
