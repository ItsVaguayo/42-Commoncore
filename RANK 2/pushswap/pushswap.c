/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 12:24:26 by vaguayo-          #+#    #+#             */
/*   Updated: 2025/12/23 12:43:46 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_node *create_node()
{
    t_node *new;

    new = malloc(sizeof(t_node));
    new->value = 0;
    new->next = NULL;
}

void add_back(t_node **head, int value)
{
    t_node *new;
    t_node *temp;

    new = create_node();
    new->value = value
    
}
t_node parsing(int argc,char **argv)
{
    t_node *stack_a;
    int i;

    stack_a = NULL;
    i = 1;
    while (i < argc)
    {
        
    }
    
}

int main(int argc, char **argv)
{
    if (!(argc > 1))
        return (ft_printf("Error/n"));
    
}
