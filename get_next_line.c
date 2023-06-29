/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrov <gyser.petrov.42@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 21:30:21 by spetrov           #+#    #+#             */
/*   Updated: 2023/06/08 23:24:48 by spetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_get_line(char *buffer)
{
	int		i;
	char	*str;

	i = 0;
	if (!buffer[i])
		return (NULL);
	//buffer[4] = aaaa|a\n
	//            bb
	while (buffer[i] && buffer[i] != '\n')
		i++;
	str = (char *)malloc(sizeof(char) * (i + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		str[i] = buffer[i];
		i++;
	}
	if (buffer[i] == '\n')
	{
		str[i] = buffer[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_save(char *buffer)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	//buffer[4] = aaaa|a\n
	//            bb
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(buffer) - i + 1));
	if (!str)
		return (NULL);
	i++;
	j = 0;
	while (buffer[i])
		str[j++] = buffer[i++];
	str[j] = '\0';
	free(buffer);
	return (str);
}

char	*ft_read_and_save(int fd, char *buffer)
{
	char	*swap;
	int		read_bytes;

	swap = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!swap)
		return (NULL);
	read_bytes = 1;
	//buffer[4] = aaaa|a\n
	//            bb
	while (!ft_strchr(buffer, '\n') && read_bytes != 0)
	{
		read_bytes = read(fd, swap, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free(swap);
			return (NULL);
		}
		swap[read_bytes] = '\0';
		buffer = ft_strjoin(buffer, swap);
	}
	free(swap);
	return (buffer);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	line = NULL;
	if (read(fd, 0, 0) < 0 || fd < 0 || BUFFER_SIZE <= 0)
    {
        if (buffer)
        {
            free (buffer);
            buffer = NULL;
        }
        return (NULL);
    }
	buffer = ft_read_and_save(fd, buffer);
	//buffer[4] = aaaa|a\n
	//            bb
	if (!buffer)
		return (NULL);
	line = ft_get_line(buffer);
	buffer = ft_save(buffer); // bb
	return (line);
}
