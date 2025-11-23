/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:32:09 by vaguayo-          #+#    #+#             */
/*   Updated: 2025/11/22 21:12:58 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 1
#endif

char *line_reader(char **storage, int fd)
{
    char        *buffer;
    ssize_t     bytes;
    
    buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
    if (!buffer)
        return (NULL);
    bytes = 1;
    while (!ft_strchr(*storage, '\n') && (bytes = read(fd, buffer, BUFFER_SIZE)) > 0)
    {
        buffer[bytes] = '\0';
        char *temp = *storage;
        *storage = ft_strjoin(temp, buffer);
        free(temp);
        if (!*storage)
            return (free(buffer), NULL);
    }
    if (bytes < 0)
        return (free(*storage), *storage = NULL, free(buffer), NULL);
    free(buffer);
    if (**storage == '\0')
        return (free(*storage), *storage = NULL, NULL);
    return (*storage);
}
char *clean_line(char **storage, size_t i)
{
    char    *line;
    char    *tempstorage;

    line = ft_substr(*storage, 0, i + 1);
        tempstorage = ft_substr(*storage, i + 1, ft_strlen(*storage) - (i + 1));
        if (!line || !tempstorage)
        {
            free(line);
            free(tempstorage);
            free(*storage);
            *storage = NULL;
            return (NULL);
        }
        free(*storage);
        *storage = tempstorage;
    return (line);
}
char *line_separator(char **storage)
{
    char    *line;
    size_t  i;
    
    if (!*storage) 
        return (NULL);
    i = 0;
    while((*storage)[i] && (*storage)[i] != '\n') 
        i++;
    if ((*storage)[i] == '\n')
        line = clean_line(storage, i);
    else
    {
        line = ft_substr(*storage, 0, ft_strlen(*storage));
        free(*storage);
        *storage = NULL;
    }
    if (!line)
        return (NULL);
    return (line);
}

char *get_next_line(int fd)
{
    static char *storage;
	char *line;
    
    size_t i;
    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    if (!storage)
        storage = ft_calloc(1, 1);
    if (!*storage)
        return (NULL);
    if (line_reader(&storage, fd) == NULL)
            return(NULL);
    line = line_separator(&storage);
	if (!line)
		return (NULL);
	return (line);
}