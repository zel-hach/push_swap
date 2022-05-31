/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:49:43 by zel-hach          #+#    #+#             */
/*   Updated: 2022/05/30 14:15:52 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack__b(t_info_b *infob, t_info *info, t_list temp, int midle)
{
	if (temp.index_b <= midle)
	{
		while (temp.data != info->head->data)
			ra(info);
		pb(infob, info);
	}
	else if (temp.index_b > midle)
	{
		while (temp.data != info->head->data)
			rra(info);
		pb(infob, info);
	}
}

void	fusion_stack(t_info_b *infob, t_info *info)
{
	t_list	*temp;
	int		index_min;
	int		midle;

	temp = info->head;
	index_min = 0;
	while (temp)
	{
		if (temp->index == index_min && index_min < 2)
		{
			midle = info->size / 2;
			inedex_stack_a(info);
			sort_stack__b(infob, info, *temp, midle);
			index_min++;
			temp = info->head;
			continue ;
		}
		temp = temp->next;
	}
}

void	sort_five(t_info_b *infob, t_info *info)
{
	t_list	*temp;
	int		size;

	size = info->size;
	index_stack(info);
	fusion_stack(infob, info);
	temp = infob->head;
	sort_three(info);
	while (infob->head)
	{
		if (infob->head->data < infob->head->next->data)
		{
			sb(infob);
			pa(infob, info);
			pa(infob, info);
		}
		pa(infob, info);
		pa(infob, info);
	}
}
