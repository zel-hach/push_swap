/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:47:47 by zel-hach          #+#    #+#             */
/*   Updated: 2022/05/30 17:08:41 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

char	**ft_join_args(char **av)
{
	char	*res;
	char	**str;
	char	*ptr;
	char	*s;
	int		i;

	i = 0;
	res = ft_strdup("");
	while (av[++i])
	{
		s = ft_strjoin(av[i], " ");
		ptr = res;
		res = ft_strjoin(res, s);
		free(ptr);
		free(s);
	}
	str = ft_split(res, ' ');
	free(res);
	return (str);
}

void	push_element(char **tab, t_list *a, t_info *info)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (tab[i])
	{
		ft_lstadd_back(&a, ft_lstnew(ft_atoi(tab[i])), info);
		a->index = -1;
		if (i == 0)
			info->head = a;
		info->size++;
		i++;
	}
}

void	init_stack_b(t_info_b *infob)
{
	infob->first_time = -1;
	infob->size = -1;
	infob->head = NULL;
	infob->tail = NULL;
}

void	checker(char **tableau, t_info *info, t_info_b *infob)
{
	t_list		*a;

	info->size = 0;
	a = NULL;
	if (is_integer(tableau) == 0)
		write(2, "Error\n", 6);
	else
	{
		push_element(tableau, a, info);
		if (check_double(info) == 0 || check_big_integer(info) == 0)
			write(2, "Error\n", 6);
		else
		{
			ft_read(info, infob);
			if (is_sort_stack(info) == 1 && is_empty(infob))
				ft_putstr("OK\n");
			else
				ft_putstr("KO\n");
		}
	}
}

int	main(int argc, char **argv)
{
	t_info		info;
	t_info_b	infob;
	char		**tableau;

	tableau = ft_join_args(&argv[0]);
	init_stack_b(&infob);
	if (argc >= 2)
	{
		if (check_space(argv) == 0)
			write(2, "Error\n", 6);
		else
		{
			checker(tableau, &info, &infob);
		}
		ft_free_stack(&info);
		free(infob.head);
	}
	return (0);
}
