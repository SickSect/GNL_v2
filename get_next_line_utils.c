#include "get_next_line.h"

char *ft_check_remain(char *remain, char **line)
{
  char *ptr_nl;

  ptr_nl = NULL;
  if(remain)
  {
    if((ptr_nl = ft_strchr(remain,'\n')))
    {
      *ptr_nl = '\0';
      *line = ft_strdup(remain);
      ft_strcpy(remain,++ptr_nl);
    }
    else
    {
      *line = ft_strdup(remain);
      ft_strclear(remain);
    }
  }
  else
      *line = ft_strnew(1);
  return (ptr_nl);
}

void ft_strclear(char *str)
{
  int i;

  i = 0;
  while(str[i] != '\0')
  {
    str[i] = '\0';
    i++;
  }
  str[i] = '\0';
}

void ft_strcpy(char *dest, char *src)
{
  int i;

  i = 0;
  while(src[i] != '\0')
  {
    dest[i] = src[i];
  }
  dest[i] = '\0';
}

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
    while(str[i] != '\0')
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
    new_line[i] = '\0';
    return(new_line);
}
