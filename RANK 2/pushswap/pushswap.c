/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 12:24:26 by vaguayo-          #+#    #+#             */
/*   Updated: 2026/01/08 16:50:43 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void prueba(t_node **stack_a ,int argc)
{
    t_node *stack_b;

    stack_b = NULL;
    if (argc == 3)
        sort_two(stack_a);
    else if (argc == 4)
        sort_three(stack_a);
    else
        sort_five(stack_a,&stack_b);
    
}

t_node *parsing(int argc, char **argv)
{
    t_node *stack_a;
    char **numbers;
  
    stack_a = NULL;
    if (argc == 2)
        numbers = ft_split(argv[1], ' ');
    else
        numbers = argv + 1;
    if (!numbers || !validate(numbers))
    {
        write(2, "Error\n", 6);
        if (argc == 2)
            free_split(numbers);
        exit(1);
    }
    build_stack(&stack_a, numbers);
    if (argc == 2)
        free_split(numbers);
    return (stack_a);
}

int main(int argc, char **argv)
{
    t_node *stack_a;
    
    if (!(argc > 1))
        exit(0);

    stack_a = parsing(argc, argv);
    print_list(&stack_a);
    if (is_sorted(&stack_a))
        write(1,"sorted", 6);
    prueba(&stack_a, argc);
    return(0);
}
