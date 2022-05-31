/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:46:33 by zel-hach          #+#    #+#             */
/*   Updated: 2022/05/30 14:51:00 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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
