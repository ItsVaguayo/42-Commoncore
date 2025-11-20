/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 11:10:38 by vaguayo-          #+#    #+#             */
/*   Updated: 2025/10/22 17:23:28 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


static int	ft_isupper(int c)
{
	return ((c >= 'A' && c <= 'Z'));
}

static int	ft_islower(int c)
{
	return ((c >= 'a' && c <= 'z'));
}

int	ft_isalpha(int c)
{
	return ((ft_isupper(c) || ft_islower(c)));
}
