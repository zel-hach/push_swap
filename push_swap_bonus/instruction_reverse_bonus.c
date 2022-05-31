/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_reverse_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:47:30 by zel-hach          #+#    #+#             */
/*   Updated: 2022/05/30 17:04:37 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ra(t_info *info)
{
	t_list	*tmp;
	t_list	*tmp1;

	if (info->size > 1)
	{
		tmp = info->head;
		tmp1 = info->head->next;
		info->tail->next = tmp;
		tmp->next = NULL;
		info->tail = tmp;
		info->head = tmp1;
	}
}

void	rb(t_info_b *infob)
{
	t_list	*tmp;
	t_list	*tmp1;

	if (infob->first_time == 1 && infob->size >= 1)
	{
		tmp = infob->head;
		tmp1 = infob->head->next;
		infob->tail->next = tmp;
		tmp->next = NULL;
		infob->tail = tmp;
		infob->head = tmp1;
	}
}

void	rr(t_info_b *infob, t_info *info)
{
	ra(info);
	rb(infob);
}
