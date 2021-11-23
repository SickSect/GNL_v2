/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:39:34 by ugina             #+#    #+#             */
/*   Updated: 2021/11/23 19:42:15 by ugina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
# endif
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

char	*ft_strnew(size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_cut(char *str);
char	*ft_liner(char *str);
char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(const char *str);
int		ft_newline(const char *str);

# endif
