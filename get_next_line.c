#include "get_next_line.h"

char *get_next_line(int fd)
{
    static char* remain;
    char cur_buf[BUFFER_SIZE + 1];
    char *line;
    int last;
    char *ptr_nl;
    char *tmp;

    if(fd < 0 || fd > 256 || BUFFER_SIZE <= 0)
      return (NULL);
    ptr_nl = ft_check_remain(remain,&line);
    while(!ptr_nl && (last = read(fd,cur_buf,BUFFER_SIZE)))
    {
        cur_buf[last] = '\0';
        if((ptr_nl = ft_strchr(cur_buf,'\n')))
        {
            *ptr_nl = '\0';
            ptr_nl++;
            remain = ft_strdup(ptr_nl);
        }
        tmp = line;
        line = ft_strjoin(line,cur_buf);
        free(tmp);
    }
    //printf("%s -LINE\n%s SAVE\n",line,remain);
    return (last || ft_strlen(remain) || ft_strlen(line)) ? line : NULL;
}
