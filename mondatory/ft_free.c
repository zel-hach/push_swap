/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:44:37 by zel-hach          #+#    #+#             */
/*   Updated: 2022/05/30 12:11:13 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_stack(t_info *info)
{
	t_list	*temp;
	t_list	*ptr;

	temp = info->head;
	ptr = temp;
	while (temp)
	{
		temp = temp->next;
		free(ptr);
		ptr = temp;
	}
}
