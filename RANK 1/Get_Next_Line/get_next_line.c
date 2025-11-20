/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:32:09 by vaguayo-          #+#    #+#             */
/*   Updated: 2025/11/11 15:11:42 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

char *line_reader(char **storage, int fd)
{
    char        *buffer;
	char 		*temp;
    ssize_t     bytes;
    
    buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
    if (!*storage)
        *storage = ft_calloc(1,1);
	if (!*storage || !buffer)
		return (free(buffer),NULL);
    bytes = 1;
    while (1)
    {
        bytes = read(fd, buffer, BUFFER_SIZE);
        if (bytes < 0)
            return (free(buffer), NULL);
        if (bytes == 0)
            break;
		temp = *storage;
        *storage = ft_strjoin(temp, buffer);
		free(temp);
        if (!*storage)
			return (free(buffer), NULL);
		if (ft_strchr(buffer, '\n'))
			break ;
    }
    free(buffer);
    return (*storage);
}

char *get_next_line(int fd)
{
    static char *storage;
    char *line;
    char *tempstorage;
    size_t i;

    if (line_reader(&storage, fd) == NULL)
        return(NULL);
    i = 0;
    while(storage[i] && storage[i] != '\n')
        i++;
    if (storage[i] == '\n')
    {
        line = ft_substr(storage, 0, i + 1);
        tempstorage = ft_substr(storage, i + 1, ft_strlen(storage) - (i + 1));
		free(storage);
		storage = tempstorage;
    }
	else
	{
		line = ft_substr(storage, 0, ft_strlen(storage));
        free(storage);
        storage = NULL;
	}
    return(line);
}