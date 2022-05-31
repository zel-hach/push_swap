/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_reverse.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:44:40 by zel-hach          #+#    #+#             */
/*   Updated: 2022/05/30 16:52:44 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_info *info)
{
	t_list	*tmp;
	t_list	*tmp1;

	tmp = info->head;
	tmp1 = info->head->next;
	info->tail->next = tmp;
	tmp->next = NULL;
	info->tail = tmp;
	info->head = tmp1;
	ft_putstr("ra\n");
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
	ft_putstr("rb\n");
}

void	rr(t_info_b *infob, t_info *info)
{
	ra(info);
	rb(infob);
	ft_putstr("rr\n");
}
