/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_big_integer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:43:53 by zel-hach          #+#    #+#             */
/*   Updated: 2022/05/30 12:09:05 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
