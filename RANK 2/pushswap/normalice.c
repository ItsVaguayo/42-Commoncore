/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalice.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 19:37:41 by vaguayo-          #+#    #+#             */
/*   Updated: 2026/01/14 11:34:32 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	*arr_value(t_node **stack_a)
{   
    t_node	*temp;
    int		*arr;
    int		i;
	int 	size;
	
    temp = *stack_a;
	size = stack_size(stack_a);
    arr = malloc(size * sizeof(int));
	if (!arr)
		exit(1);
	i = 0;
    while (temp)
    {
      arr[i] = temp->value;
      temp = temp->next;
	  i++;
    }
    return(arr);
}

void normalizestack(t_node **stack_a, int *arr,int size)
{
	t_node *temp;
    int count;
    int i;

    temp = *stack_a;
    while (temp)
    {
    	i = 0;
    	count = 0;
        while (i < size)
        {
            if (arr[i] < temp->value)
                count++;
            i++;
        }
		temp->value = count;
		temp = temp->next;
    }
}
void normalize(t_node **stack_a)
{
   int *arr;

   arr = arr_value(stack_a);
   normalizestack(stack_a,arr,stack_size(stack_a));
   free (arr);
} 