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
# define BUFFER_SIZE = 10

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/uio.h>
# include <sys/types.h>


char	*get_next_line(int fd);
char	*get_next_line_utils(int fd);
#endif
