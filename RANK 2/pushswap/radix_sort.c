#include "pushswap.h"

void normalize(t_node **stack_a)
{
    t_node *temp;
    int *arr;
    int count;
	int size;
    int i;

    temp = *stack_a;
	size = stack_size(stack_a);
    arr = malloc(size * sizeof(int));
	
	
	i = 0;
    while (temp)
    {
      arr[i] = temp->value;
      temp = temp->next;
	  i++;
    }
    temp = *stack_a;
    while (temp)
    {
    	i = 0;
    	count = 0;
        while (arr[i])
        {
            if (arr[i] < temp->value)
                count++;
            i++;
        }
		temp->value = count;
		temp = temp->next; 
    }
} 