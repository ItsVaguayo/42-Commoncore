/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 12:24:26 by vaguayo-          #+#    #+#             */
/*   Updated: 2025/12/23 15:08:30 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_node *create_node(int value)
{
    t_node *new;

    new = malloc(sizeof(t_node));
    new->value = value;
    new->next = NULL;
    return (new);
}

void add_back(t_node **head, int value)
{
    t_node *new;
    t_node *temp;

    new = create_node(value);
    if ((*head) == NULL)
    {
        *head = new;
        return;
    }
    temp = *head;
    while (temp->next)
        temp = temp->next;
    temp->next = new;
}
t_node *parsing(char **argv)
{
    t_node *stack_a;
    int i;

    stack_a = NULL;
    i = 1;
    while (argv[i] != NULL)
    {
        add_back(&stack_a,ft_atol(argv[i]));
        i++;
    }
    return (stack_a);
}
void print_list(t_node **head)
{
    t_node *temp;
    
    if ((*head) == NULL)
        return;
    temp = *head;
    while (temp)
    {
       ft_printf("%d\n", temp->value);
       temp = temp->next;
    }
    
}

int main(int argc, char **argv)
{
    t_node *stack_a;
    
    if (!(argc > 1))
        return (write(2, "Error\n", 6));

    stack_a = parsing(argv);
    print_list(&stack_a);
    return(0);
}
