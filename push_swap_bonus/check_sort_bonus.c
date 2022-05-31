/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:46:19 by zel-hach          #+#    #+#             */
/*   Updated: 2022/05/30 17:59:36 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	is_sort_stack(t_info *info)
{
	t_list	*temp;

	temp = info->head;
	while (temp && temp->next)
	{
		if (temp->data > temp->next->data)
			return (0);
		else
			temp = temp->next;
	}
	return (1);
}

int	is_empty(t_info_b *infob)
{
	return (infob->head == NULL);
}

int	is_empty_a(t_info *info)
{
	return (info->head == NULL);
}
