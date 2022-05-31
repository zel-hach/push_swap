/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_swap_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:47:34 by zel-hach          #+#    #+#             */
/*   Updated: 2022/05/30 15:02:07 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	sa(t_info *info)
{
	t_list	*tmp;
	t_list	*tmp1;
	t_list	*tmp2;

	if (info->size > 1)
	{
		tmp = info->head;
		tmp1 = tmp->next;
		tmp2 = tmp1->next;
		tmp1->next = tmp;
		tmp->next = tmp2;
		info->head = tmp1;
		if (info->size == 2)
			info->tail = info->head->next;
	}
}

void	sb(t_info_b *info)
{
	t_list	*tmp;
	t_list	*tmp1;
	t_list	*tmp2;

	if (info->first_time == 1 && info->size > 1)
	{
		tmp = info->head;
		tmp1 = tmp->next;
		tmp2 = tmp1->next;
		tmp1->next = tmp;
		tmp->next = tmp2;
		info->head = tmp1;
		if (info->size == 2)
			info->tail = info->head->next;
	}
}

void	ss(t_info *info, t_info_b *infob)
{
	sa(info);
	sb(infob);
}
