/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 15:16:21 by zel-hach          #+#    #+#             */
/*   Updated: 2022/05/30 11:46:50 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strchr(char *save)
{
	int	i;

	i = 0;
	if (!save)
		return (-1);
	while (save[i])
	{
		if (save[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

size_t	ft_strlen_a(char const *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup_a(const char *s)
{
	char	*p;
	int		i;
	int		n;

	i = 0;
	n = ft_strlen_a(s);
	if (!s)
		return (NULL);
	p = malloc((n + 1) * sizeof(char));
	if (!p)
		return (NULL);
	while (i < (int)n)
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	char			*str;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	str = (char *)s;
	if (!str)
		return (NULL);
	if (start >= ft_strlen_a(str))
		return (ft_strdup_a(""));
	if (ft_strlen_a(str) - start < len)
		len = ft_strlen_a(str) - start;
	p = malloc(len + 1 * sizeof(char));
	if (!p)
		return (NULL);
	while (str[i] != '\0')
	{
		if (i >= start && j < len)
			p[j++] = str[i];
		i++;
	}
	p[j] = '\0';
	return (p);
}

char	*ft_strjoin_a(char const *s1, char const *s2)
{
	size_t			i;
	size_t			j;
	unsigned int	len1;
	unsigned int	len2;
	char			*ptr;

	i = 0;
	j = 0;
	len1 = ft_strlen_a (s1);
	len2 = ft_strlen_a (s2);
	ptr = malloc(len1 + len2 + 1 * sizeof(char));
	if (!ptr)
		return (NULL);
	while (i < len1)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (j < len2)
		ptr[i++] = s2[j++];
	ptr[i] = '\0';
	return (ptr);
}
