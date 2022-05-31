/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:50:07 by zel-hach          #+#    #+#             */
/*   Updated: 2022/05/30 14:02:20 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three1(t_list *temp, t_info *info)
{
	if (temp->next->index == 0)
	{
		if (temp->data > info->tail->data)
			ra(info);
		else
			sa(info);
	}
	else if (info->tail->index == 0)
	{
		if (temp->data < temp->next->data)
			rra(info);
		else
		{
			sa(info);
			rra(info);
		}
	}
}

void	sort_three(t_info *info)
{
	t_list	*temp;

	temp = info->head;
	index_stack(info);
	if (temp->index == 0 && temp->next->data > info->tail->data)
	{
		sa(info);
		ra(info);
	}
	else
		sort_three1(temp, info);
}
