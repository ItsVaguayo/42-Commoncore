/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 00:09:19 by vaguayo-          #+#    #+#             */
/*   Updated: 2025/12/30 00:40:09 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int validate_format(char **numbers)
{
    size_t i;
    size_t z;
    
    i = 0;
    z = 0;
    while (numbers[i])
    {
        if (numbers[i][z] == '+' || numbers[i][z] == '-' )
            z++;
        if (numbers[i][z] == '\0')
            return (0);
        while (numbers[i][z] != '\0')
        {
            if (numbers[i][z] < '0' && numbers[i][z] > '9')
                return (0);
            z++;
        }
        i++;
        z = 0;
    }
    return (1);
}

int validate_duplicates()