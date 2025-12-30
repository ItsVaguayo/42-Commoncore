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
t_node *create_node()
{
    t_node *new = malloc(sizeof(t_node));

    new->value = 1;
    new->next = NULL;

    return (new);
}
void print_list(t_node *head)
{
    t_node *temp;

    if (head == NULL)
        printf("vacia");
    temp = head;
    while (temp)
    {
        printf("%d\n", temp->value);
        temp = temp->next;
    }
}

void add_back(t_node **head, int value)
{
    t_node *new = create_node();
    t_node *temp;

    new->value = value;
    if (*head == NULL)
    {
        *head = new;
        return;
    }
    temp = *head;
    while (temp->next)
       temp = temp->next;
    temp->next = new;
}
void push(t_node **from, t_node **to)
{
    t_node *temp;
    if (*from == NULL)
        return;

    temp = *from;           // guardo primer nodo
    *from = temp->next;     // avanzo la lista origen
    temp->next = *to;       // engancho con destino
    *to = temp;             // actualizo destino

}
void swap(t_node **head)
{
    t_node *firts = *head;
    t_node *segond = firts->next;
   firts->next = segond->next;
   segond->next = firts;
   *head = segond;
}
void free_list(t_node *head)
{
    t_node *temp;

    while (head)
    {
        temp = head->next;  // guardamos el siguiente
        free(head);         // liberamos el actual
        head = temp;        // avanzamos
    }
}

int main(void)
{
    t_node *stack_a = NULL;
    t_node *stack_b = NULL;

    add_back(&stack_a,1);
    add_back(&stack_a,2);
    add_back(&stack_a,3);
    add_back(&stack_b,4);
    add_back(&stack_b,5);
    add_back(&stack_b,6);
    print_list(stack_a);
    printf("\n");
    print_list(stack_b);
    printf("\n");
    printf("\n");
    push(&stack_a,&stack_b);
    print_list(stack_a);
    printf("\n");
    print_list(stack_b);
    swap(&stack_a);
    printf("\n");
    print_list(stack_a);
    return (0);
}
