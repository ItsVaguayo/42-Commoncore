#include "get_next_line.h"

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 1
#endif
char *line_reader(char **storage, int fd)
{
	char *buffer;
    char *temp;
    ssize_t bytes;

	if (!*storage)
		ft_calloc(1, sizeof(char));
	if (!*storage)
		return (NULL);
	if(!buffer)
		ft_calloc(BUFFER_SIZE,sizeof(char) + 1);
	if(!buffer)
		return (NULL);
	  while (!ft_strchr(*storage, '\n') && (bytes = read(fd, buffer, BUFFER_SIZE)) > 0)
	  {
		temp = *storage;
		*storage = ft_strjoin(temp,buffer);
		free(temp);
		if(!*storage)
			return(free(buffer),NULL);
	  }
	free(buffer);
	if(!*storage)
	  return (NULL);
	return(*storage);
}

char *create_line(char **storage)
{
	char	*line;
	char	*temp;
	size_t i;

	i = 0;
	while ((*storage)[i] && (*storage)[i] == '\n')
		i++;
	if ((*storage)[i] == '\n')
	{
		temp = *storage;
		line = ft_substr(temp, 0, i + 1);
		if (!line)
			return (free(temp), NULL);
		*storage = ft_substr(temp,i + 1, ft_strlen(*storage) - (i + 1));
		if (!*storage)
			return(free(temp), NULL);
	}
	else
	{
		line = ft_substr(*storage, 0, ft_strlen(*storage));
		if (!line)
			return (NULL);
		free(*storage);
	}
return (line);
}

char *get_next_line(int fd)
{
    static char *storage;
	char *line;

    if (line_reader(&storage, fd) == NULL)
		return (free(storage), NULL);
	if ((line = create_line(&storage)) == NULL)
		return (free(storage), NULL);
	return (line);
}