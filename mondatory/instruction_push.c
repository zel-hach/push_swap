/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_push.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:46:44 by zel-hach          #+#    #+#             */
/*   Updated: 2022/05/30 12:11:29 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_info_b *b, t_info *a)
{
	t_list	*temp;
	t_list	*tmp1;

	tmp1 = a->head;
	if (b->first_time == 1)
	{
		temp = b->head;
		b->head = b->head->next;
		temp->next = a->head;
		a->head = temp;
		b->size--;
		a->size++;
	}
	else
	{
		temp = b->head;
		b->head = b->head->next;
		temp->next = a->head;
		a->head = temp;
		a->size++;
		b->size--;
	}
	ft_putstr("pa\n");
}

void	pb(t_info_b *b, t_info *a)
{
	t_list	*temp;

	if (b->first_time == -1)
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
	else
	{
		temp = a->head;
		a->head = a->head->next;
		temp->next = b->head;
		b->head = temp;
		b->size++;
		a->size--;
		b->first_time = 1;
	}
	ft_putstr("pb\n");
}
