/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrov <gyser.petrov.42@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 21:31:13 by spetrov           #+#    #+#             */
/*   Updated: 2023/04/23 15:03:26 by spetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// N chars en un string
int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *str, int c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(str) + 1;
	while (i < len)
	{
		if (*(char *)(str + i) == (char)c)
			return ((char *)(str + i));
		i++;
	}
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buffer;
	int		i;
	int		y;

	if ((!(s1) && !(s2)))
		return (NULL);
	buffer = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!(buffer))
		return (NULL);
	i = 0;
	y = 0;
	while (s1[i] != '\0')
	{
		buffer[i] = s1[i];
		i++;
	}
	while (s2[y] != '\0')
	{
		buffer[i] = s2[y];
		i++;
		y++;
	}
	buffer[i] = '\0';
	return (buffer);
}
