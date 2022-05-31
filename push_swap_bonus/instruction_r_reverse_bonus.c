/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_r_reverse_bonus.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:47:20 by zel-hach          #+#    #+#             */
/*   Updated: 2022/05/30 14:52:33 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	rra(t_info *a)
{
	t_list	*tmp;
	t_list	*tmp1;

	if (a->head != NULL)
	{
		tmp = a->head;
		tmp1 = a->head;
		while (tmp->next && tmp->next->next != NULL)
			tmp = tmp->next;
		a->head = a->tail;
		a->head->next = tmp1;
		a->tail = tmp;
		a->tail->next = NULL;
	}
}

void	rrb(t_info_b *a)
{
	t_list	*tmp;
	t_list	*tmp1;

	if (a->head != NULL)
	{
		tmp = a->head;
		tmp1 = a->head;
		while (tmp->next && tmp->next->next != NULL)
			tmp = tmp->next;
		a->head = a->tail;
		a->head->next = tmp1;
		a->tail = tmp;
		a->tail->next = NULL;
	}
}

void	rrr(t_info_b *infob, t_info *info)
{
	rra(info);
	rrb(infob);
}
