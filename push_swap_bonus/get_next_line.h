/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 13:07:25 by zel-hach          #+#    #+#             */
/*   Updated: 2022/05/28 21:22:24 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFFER_SIZE 3

# include<unistd.h>
# include<stdlib.h>

char	*get_next_line(int fd);
int		ft_strchr(char *s);
char	*ft_strjoin_a(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup_a(const char *s);
size_t	ft_strlen_a(char const *s);

#endif
