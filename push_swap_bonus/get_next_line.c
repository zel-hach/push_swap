/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 13:06:33 by zel-hach          #+#    #+#             */
/*   Updated: 2022/05/30 15:03:11 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "push_swap_bonus.h"
#include <fcntl.h>
#include <stdio.h>

char	*ft_get_line(char *save)
{
	int		i;
	int		index;
	char	*line;

	i = 0;
	if (ft_strlen_a(save) <= 0)
		return (NULL);
	index = ft_strchr (save);
	if (index == -1)
		return (ft_strdup_a(save));
	line = malloc(sizeof(char) * index + 2);
	if (!line)
		return (NULL);
	while (save[i] != '\n')
	{
		line[i] = save[i];
		i++;
	}
	line[i] = '\n';
	line[i + 1] = '\0';
	return (line);
}

char	*ft_return_save(char *save)
{
	int		len;
	int		index;
	char	*temp;

	len = ft_strlen_a(save);
	index = ft_strchr(save);
	if (!save)
		return (NULL);
	if (index != -1)
	{
		temp = ft_substr(save, (index + 1), (len - index - 1));
		free (save);
		return (temp);
	}
	free (save);
	return (NULL);
}

char	*read_newline(int fd, char *buff, char *save)
{
	char	*temp;
	int		j;

	while (ft_strchr(save) == -1)
	{
		j = read(fd, buff, BUFFER_SIZE);
		if (j > 0)
		{
			buff[j] = '\0';
			temp = ft_strjoin_a(save, buff);
			if (save)
				free (save);
			save = temp;
		}
		else
			break ;
	}
	free (buff);
	buff = NULL;
	if (j == -1)
		return (NULL);
	return (save);
}

char	*get_next_line(int fd)
{
	char		*buff;
	static char	*save;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buff = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	save = read_newline (fd, buff, save);
	line = ft_get_line(save);
	save = ft_return_save(save);
	return (line);
}
