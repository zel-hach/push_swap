/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_r_reverse.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:45:52 by zel-hach          #+#    #+#             */
/*   Updated: 2022/05/30 12:11:34 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	ft_putstr("rra\n");
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
	ft_putstr("rrb\n");
}

void	rrr(t_info_b *infob, t_info *info)
{
	rra(info);
	rrb(infob);
	ft_putstr("rrr\n");
}
