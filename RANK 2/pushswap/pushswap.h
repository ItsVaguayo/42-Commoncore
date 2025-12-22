#ifndef PUSHSWAP_H
# define PUSHSWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_printf(char const *format, ...);

typedef struct s_node {
    int value;
    struct s_node *next;
} t_node;

typedef struct pushswap
{
    t_node  *head;
    t_node  *tail;
};
#endif