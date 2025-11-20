/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:41:57 by vaguayo-          #+#    #+#             */
/*   Updated: 2025/10/23 11:20:47 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*current;

	if (!*lst || !lst)
		return ;
	tmp = *lst;
	while (tmp)
	{
		current = tmp;
		tmp = tmp->next;
		del(current->content);
		free(current);
	}
	*lst = NULL;
}
