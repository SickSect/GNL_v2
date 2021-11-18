#ifndef GNL_H
#define GNL_H

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 10
#endif

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void ft_strcpy(char *dest, char *src);
void ft_strclear(char *str);
char *ft_check_remain(char *remain,char **line);
char *get_next_line(int fd);
char *ft_strjoin(char *line, char *buf);
int ft_strlen(char *str);
char *ft_strdup(char *str);
char	*ft_strnew(int size);
char	*ft_strchr(char *str, int c);

#endif
