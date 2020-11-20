#include "get_next_line.h"

int main()
{
    int fd;
    int i;
    char *line = 0;
    fd = open("1.txt",O_RDONLY);
    while((i = get_next_line(fd, &line)) > 0)
    {
        printf("GNL RES : %i - line : %s\n",i,line);
        free(line);
    }
    printf("GNL RES : %i - line : %s\n",i,line);
    free(line);
}
