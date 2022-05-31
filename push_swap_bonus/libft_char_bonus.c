/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_char_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:36:45 by zel-hach          #+#    #+#             */
/*   Updated: 2022/05/30 14:53:49 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
}

static int	ft_cherche(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		a;
	int		b;
	int		i;
	char	*ptr;

	a = 0;
	if (!s1)
		return (NULL);
	while (s1[a] != '\0' && ft_cherche(s1[a], set))
		a++;
	b = ft_strlen(s1);
	while (b > a && ft_cherche(s1[b - 1], set))
		b--;
	ptr = malloc(sizeof(*s1) * (b - a + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (a < b)
	{
		ptr[i++] = s1[a++];
	}
	ptr[i] = 0;
	return (ptr);
}

char	*ft_strdup(const char *s)
{
	int		i;
	char	*p;

	i = 0;
	p = malloc(ft_strlen(s) + 1 * sizeof(char));
	if (!p)
		return (NULL);
	while (s[i])
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
