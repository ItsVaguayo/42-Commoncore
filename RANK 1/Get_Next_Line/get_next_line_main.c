
#include "get_next_line.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int ft_check_args(int argc)
{
    if (argc < 2)
    {   
        write (1, "File name missing.\n", 19);
        return (-1);
    }   
    if (argc > 2)
    {   
        write (1, "Too many arguments.\n", 20);
        return (-1);
    }   
    return (0);
}

int main(int argc, char **argv)
{
    int     fd; 
    char    *str;

	(void)argc;
	fd = open(argv[1], O_RDONLY);
    str = get_next_line(fd);
    while (str)
    {   
        printf("%s", str);
        free(str);
        str = NULL;
        str = get_next_line(fd);
    }   
    close(fd);
}