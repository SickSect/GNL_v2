#include "get_next_line.h"

char *get_next_line(int fd)
{
    char cur_buf[BUFFER_SIZE + 1];
    char *line;
    int last;
    char *ptr_nl;
    int flg;
    static char* remain;

    flg = 1;
    if(remain)
        line = ft_strdup(remain);
    else
        line = ft_strnew(1);

    while(flg && (last = read(fd,cur_buf,BUFFER_SIZE)))
    {
        cur_buf[last] = '\0';
        if((ptr_nl = ft_strchr(cur_buf,'\n')))
        {
            *ptr_nl = '\0';
            flg = 0;
            ptr_nl++;
            remain = ft_strdup(ptr_nl);
        }
        line = ft_strjoin(line,cur_buf);
    }
    return (line);
}
