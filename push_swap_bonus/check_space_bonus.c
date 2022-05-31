/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_space_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:46:23 by zel-hach          #+#    #+#             */
/*   Updated: 2022/05/30 15:03:33 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	check_space_strlen(char **tab)
{
	char	*ptr;

	ptr = ft_strtrim(*tab, " ");
	if (ft_strlen(ptr) == 0)
		return (free(ptr), 0);
	return (free(ptr), 1);
}

int	check_space(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (check_space_strlen(&argv[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
