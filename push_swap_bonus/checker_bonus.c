/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:46:28 by zel-hach          #+#    #+#             */
/*   Updated: 2022/05/30 17:08:58 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_rotate(char *str, t_info *a, t_info_b *b)
{
	if (ft_strcmp(str, "ra") == 0)
		ra(a);
	else if (ft_strcmp(str, "rb") == 0)
		rb(b);
	else if (ft_strcmp(str, "rr") == 0)
		rr(b, a);
	else if (ft_strcmp(str, "rrb") == 0)
		rrb(b);
	else if (ft_strcmp(str, "rra") == 0)
		rra(a);
	else if (ft_strcmp(str, "rrr") == 0)
		rrr(b, a);
	else
	{
		write(2, "Error\n", 6);
		ft_free_stack(a);
		exit(1);
	}
}

void	operation(char *str, t_info *a, t_info_b *b)
{
	if (ft_strcmp(str, "pa") == 0)
		pa(b, a);
	else if (ft_strcmp(str, "pb") == 0)
		pb(b, a);
	else if (ft_strcmp(str, "sa") == 0)
		sa(a);
	else if (ft_strcmp(str, "sb") == 0)
		sb(b);
	else if (ft_strcmp(str, "ss") == 0)
		ss(a, b);
	else
		ft_rotate(str, a, b);
}

void	ft_read(t_info *info, t_info_b *infob)
{
	char	*input;

	input = ft_strtrim(get_next_line(0), "\n");
	while (input)
	{
		operation(input, info, infob);
		free(input);
		input = ft_strtrim(get_next_line(0), "\n");
	}
	free(input);
}
