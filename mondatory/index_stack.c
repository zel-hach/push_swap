/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:25:35 by zel-hach          #+#    #+#             */
/*   Updated: 2022/05/30 14:26:26 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index_stack(t_info *info)
{
	t_list	*tmp;
	t_list	*tmp1;
	int		i;

	tmp = info->head;
	while (tmp)
	{
		i = 0;
		tmp1 = info->head;
		while (tmp1)
		{
			if (tmp1->data < tmp->data)
				i++;
			tmp1 = tmp1->next;
		}
		tmp->index = i;
		tmp = tmp->next;
	}
}

void	inedex_stack(t_info_b *infob)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = infob->head;
	while (tmp)
	{
		tmp->index_b = i;
		i++;
		tmp = tmp->next;
	}
}

void	inedex_stack_a(t_info *info)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = info->head;
	while (tmp)
	{
		tmp->index_b = i;
		i++;
		tmp = tmp->next;
	}
}
