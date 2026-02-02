/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 12:24:26 by vaguayo-          #+#    #+#             */
/*   Updated: 2026/01/19 14:28:15 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	dispatcher(t_node **stack_a, t_node **stack_b, int stacksize)
{
	if (stacksize == 2)
		sort_two(stack_a);
	else if (stacksize == 3)
		sort_three(stack_a);
	else if (stacksize == 4 || stacksize == 5)
		sort_five(stack_a, stack_b);
	else
	{
		normalize(stack_a);
		radix_sort(stack_a, stack_b);
	}
	stack_clear(stack_a);
}

t_node	*parsing(int argc, char **argv)
{
	t_node	*stack_a;
	char	**numbers;
	long	*arr;

	stack_a = NULL;
	if (argc == 2)
		numbers = ft_split(argv[1], ' ');
	else
		numbers = argv + 1;
	arr = validate(numbers);
	if (!numbers || !arr)
	{
		write(2, "Error\n", 6);
		if (argc == 2)
			free_split(numbers);
		exit(1);
	}
	build_stack(&stack_a, numbers, arr);
	if (argc == 2)
		free_split(numbers);
	free(arr);
	return (stack_a);
}

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;

	if (!(argc > 1))
		return (0);
	stack_b = NULL;
	stack_a = parsing(argc, argv);
	if (is_sorted(&stack_a))
		return (0);
	dispatcher(&stack_a, &stack_b, stack_size(&stack_a));
	return (0);
}
