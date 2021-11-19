#include "get_next_line.h"

char *ft_reader(int fd,char *line)
{
  int last;
  char *reader;

  reader = malloc(sizeof(char) * (BUFFER_SIZE + 1));
  if(!reader)
    return(NULL);
  last = 1;
  while(last && !ft_newline(line))
  {
    last = read(fd,reader,1);
    if(last == -1)
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
