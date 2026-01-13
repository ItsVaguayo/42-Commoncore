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

/* ===== LIBFT ===== */
long    ft_atol(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);
char	*ft_strdup(char *src);
size_t	ft_strlen(const char *s);

int	ft_printf(char const *format, ...);

/* ===== PARSING ===== */

int validate(char **numbers);
int     is_valid_number(char *str);
t_node  *parsing(int argc, char **argv);
int validate_format(char **numbers);
int has_duplicates(long *arr, int size);
long *to_long_array(char **numbers, int size);
void	*free_split(char **arr);
void build_stack(t_node **stack_a, char **numbers);


/* ===== LIST UTILS ===== */

t_node  *create_node(int value);
void    add_back(t_node **head, int value);
void    free_list(t_node *head);
int     is_sorted(t_node **head);
int     stack_size(t_node **stack);
void print_list(t_node **head);

/* ===== OPERATIONS ===== */

void pa(t_node **stack_b, t_node **stack_a);
void pb(t_node **stack_a, t_node **stack_b);
void ra(t_node **stack_a);
void rb(t_node **stack_b);
void rr(t_node **stack_a, t_node **stack_b);
void rra(t_node **stack_a);
void rrb(t_node **stack_b);
void rrr(t_node **stack_a, t_node **stack_b);
void sa(t_node **stack_a);
void sb(t_node **stack_b);
void ss(t_node **stack_a, t_node **stack_b);

/* ===== SORT ===== */

void sort_two(t_node **stack_a);
void sort_three(t_node **stack_a);
void sort_five(t_node **stack_a, t_node **stack_b);
void normalize(t_node **stack_a);
#endif