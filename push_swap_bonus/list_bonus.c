/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:47:38 by zel-hach          #+#    #+#             */
/*   Updated: 2022/05/30 14:54:19 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst -> next;
	}
	return (i);
}

t_list	*ft_lstnew(long long int content)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (!elem)
	{
		return (NULL);
	}
	elem->data = content;
	elem->next = NULL;
	return (elem);
}

void	ft_lstadd_back(t_list **alst, t_list *new, t_info *info)
{
	t_list	*ptr;

	ptr = *alst;
	if (alst)
	{
		if (*alst == NULL)
		{
			*alst = new;
			info->tail = *alst;
		}
		else
		{
			while (ptr->next != NULL)
			{
				ptr = ptr->next;
			}
			ptr->next = new;
			info->tail = ptr->next;
		}
	}
}
