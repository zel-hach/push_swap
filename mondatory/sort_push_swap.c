/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_push_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:49:59 by zel-hach          #+#    #+#             */
/*   Updated: 2022/05/30 17:40:26 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_index_b(t_info_b *infob, t_info *info, int m, int k)
{
	index_stack(info);
	while (info->size != 0)
	{
		if (info->head->index <= m)
		{
			pb(infob, info);
			rb(infob);
			m++;
		}
		else if (info->head->index <= (m + k))
		{
			pb(infob, info);
			m++;
		}
		else
			ra(info);
	}
}

void	sort_stack__b2(t_info_b *infob, t_info *info, t_list temp1, int midle)
{
	if (temp1.index_b < midle)
	{
		while (infob->head->data != temp1.data)
			rb(infob);
		pa(infob, info);
	}
	else if (temp1.index_b >= midle)
	{
		while (infob->head->data != temp1.data)
			rrb(infob);
		pa(infob, info);
	}
}

void	sort_push_swap(t_info_b *infob, t_info *info)
{
	int		midle;
	int		max_index;
	t_list	*temp1;

	if (info->size <= 250)
		sort_index_b(infob, info, 1, 15);
	else
		sort_index_b(infob, info, 1, 25);
	temp1 = infob->head;
	while (temp1)
	{
		inedex_stack(infob);
		max_index = infob->size - 1;
		if (temp1->index == max_index + 1)
		{
			midle = infob->size / 2;
			sort_stack__b2(infob, info, *temp1, midle);
			temp1 = infob->head;
		}
		else
			temp1 = temp1->next;
	}
}
