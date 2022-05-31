/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_big_integer_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:46:06 by zel-hach          #+#    #+#             */
/*   Updated: 2022/05/30 14:59:22 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	check_big_integer(t_info *info)
{
	t_list	*tmp1;

	tmp1 = info->head;
	while (tmp1)
	{
		if (tmp1->data > INT_MAX || tmp1->data < INT_MIN)
			return (0);
		tmp1 = tmp1->next;
	}
	return (1);
}
