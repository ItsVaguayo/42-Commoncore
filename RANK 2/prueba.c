# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_node {
    int value;
    struct s_node *next;
} t_node;

/*int main(void)
{
    t_node n1;
    t_node n2;
    t_node n3;

    n1.value = 10;
    n2.value = 20;
    n3.value = 30;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;
    
    printf("%d\n", n1.value);
    printf("%d\n", n1.next ->value);
    printf("%d\n", n1.next ->next->value);
}*/          

