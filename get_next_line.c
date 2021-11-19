#include "get_next_line.h"

char *ft_reader(int fd,char *line)
{
  int last;
  char *reader;
  int size;
  if(BUFFER_SIZE < 10)
    size = BUFFER_SIZE + 42;
  else
    size = BUFFER_SIZE;

  reader = malloc(sizeof(char) * (size + 1));
  if(!reader)
    return(NULL);
  last = 1;
  while(last && !ft_newline(line))
  {
    last = read(fd,reader,size);
    if(last < 0)
    {
      free(reader);
      return(NULL);
    }
    reader[last] = '\0';
    line = ft_strjoin(line,reader);
  }
  free(reader);
  return(line);
}

char *get_next_line(int fd)
{
  char *line;
  static char *str;

  if(fd < 0 || BUFFER_SIZE <= 0)
    return(NULL);
  str = ft_reader(fd,str);
  if(!str)
    return(NULL);
  line = ft_liner(str);
  str = ft_cut(str);
  return(line);
}
