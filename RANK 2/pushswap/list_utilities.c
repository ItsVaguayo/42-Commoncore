/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utilities.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 12:24:26 by vaguayo-          #+#    #+#             */
/*   Updated: 2026/01/19 14:29:22 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	stack_clear(t_node **head)
{
	t_node	*temp;
	t_node	*current;

	if (!(*head))
		return ;
	temp = *head;
	while (temp)
	{
		current = temp;
		temp = temp->next;
		free(current);
	}
}

t_node	*create_node(int value)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (NULL == new)
		return (NULL);
	new->value = value;
	new->next = NULL;
	return (new);
}

int	add_back(t_node **head, int value)
{
	t_node	*new;
	t_node	*temp;

	new = create_node(value);
	if (new == NULL)
		return (0);
	if ((*head) == NULL)
	{
		*head = new;
		return (1);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (1);
}

void	build_stack(t_node **stack_a, char **numbers, long *arr)
{
	int	i;

	i = 0;
	while (numbers[i] != NULL)
	{
		if (!(add_back(stack_a, arr[i])))
		{
			stack_clear(stack_a);
			free(arr);
			exit(1);
		}
		i++;
	}
}

int	is_sorted(t_node **head)
{
	t_node	*temp;

	if ((*head) == NULL)
		return (0);
	temp = *head;
	while (temp && temp->next)
	{
		if (temp->value > temp->next->value)
			return (0);
		temp = temp->next;
	}
	return (1);
}
