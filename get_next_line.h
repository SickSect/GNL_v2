#ifndef GNL_H
#define GNL_H

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 10
#endif

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

char *ft_strchr(const char *s, int c);
char *ft_cut(char *str);
char *ft_liner(char *str);
char *get_next_line(int fd);
char *ft_strjoin(char *s1, char *s2);
size_t ft_strlen(const char *str);
int	ft_newline(const char *str);

#endif
