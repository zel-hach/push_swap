/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_push_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:47:16 by zel-hach          #+#    #+#             */
/*   Updated: 2022/05/30 18:00:53 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	pa(t_info_b *b, t_info *a)
{
	t_list	*temp;
	t_list	*tmp1;

	tmp1 = a->head;
	if (b->first_time == 1 && !is_empty(b))
	{
		temp = b->head;
		b->head = b->head->next;
		temp->next = a->head;
		a->head = temp;
		b->size--;
		a->size++;
	}
}

void	pb(t_info_b *b, t_info *a)
{
	t_list	*temp;

	if (b->first_time == -1 && !is_empty_a(a))
	{
		temp = a->head;
		a->head = a->head->next;
		temp->next = b->head;
		b->head = temp;
		b->tail = temp;
		a->size--;
		b->size++;
		b->first_time = 1;
	}
	else if (b->first_time == 1 && !is_empty_a(a))
	{
		temp = a->head;
		a->head = a->head->next;
		temp->next = b->head;
		b->head = temp;
		b->size++;
		a->size--;
		b->first_time = 1;
	}
}
