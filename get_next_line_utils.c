#include "get_next_line.h"

char	*ft_strnew(int size)
{
    int i;

    i = 0;
    char *str;
    str = (char *)malloc(sizeof(char) * (size + 1));
    if(!str)
        return(NULL);
    while(i < size)
    {
        str[i] = '\0';
        i++;
    }
    str[i] = '\0';
    return (str);
}

char	*ft_strchr(char *str, int c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return ((char *)str + i);
		i++;
	}
	if (str[i] == c)
		return ((char *)str + i);
	return (NULL);
}

char *ft_strdup(char *str)
{
    int i;
    char *new_str;

    i = 0;

    while(str[i] != '\0')
        i++;
    new_str = malloc(sizeof(char) * (i + 1));
    if(!new_str)
        return (NULL);
    i = 0;
    while(str[i])
    {
        new_str[i] = str[i];
        i++;
    }
    new_str[i] = '\0';
    // FREE ?
    return (new_str);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return(i);
}

char *ft_strjoin(char *line, char *buf)
{
    char *new_line;
    int len;
    int i;
    int j;

    i = 0;
    j = 0;
    len = ft_strlen(line) + ft_strlen(buf);
    new_line = malloc(sizeof(char) * (len + 1));
    if(!new_line)
        return(NULL);
    //FREE???
    while(line[i] != '\0')
    {
        new_line[i] = line[i];
        i++;
    }
    while(buf[j] != '\0')
    {
        // if(buf[j] == '\n') ??????
        new_line[i] = buf[j];
        i++;
        j++;
    }
    free(line);
    new_line[i] = '\0';
    return(new_line);
}
