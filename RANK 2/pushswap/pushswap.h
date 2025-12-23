#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

/* ===== STRUCT ===== */

typedef struct s_node
{
    int             value;
    struct s_node   *next;
}   t_node;

/* ===== PARSING ===== */

long    ft_atol(const char *str);
int     is_valid_number(char *str);
t_node  *parsing(char **argv);

/* ===== LIST UTILS ===== */

t_node  *create_node(int value);
void    add_back(t_node **head, int value);
void    free_list(t_node *head);

/* ===== OPERATIONS ===== */

void    push(t_node **from, t_node **to);
void    swap(t_node **head);

#endif