/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrov <gyser.petrov.42@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 21:30:38 by spetrov           #+#    #+#             */
/*   Updated: 2023/04/23 15:24:18 by spetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFFER_SIZE 5
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "stdio.h"

int		ft_strlen(const char *str);
char	*ft_strchr(char *str, int c);
char	*ft_strjoin(char const *s1, char const *s2);

char	*get_next_line(int fd);

#endif
