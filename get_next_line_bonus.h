/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrov <gyser.petrov.42@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 12:20:37 by spetrov           #+#    #+#             */
/*   Updated: 2023/06/29 12:20:37 by spetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 7
# endif
# include <stdlib.h>
# include <unistd.h>

size_t			ft_strlen(char *str);
char			*ft_strchr(char *str, int c);
char			*ft_strjoin(char *s1, char *s2);

char			*get_next_line(int fd);
char			*ft_write_buffer(int fd, char *buffer);
char			*ft_get_line(char *buffer);
char			*ft_update_buffer(char *buffer);

#endif
