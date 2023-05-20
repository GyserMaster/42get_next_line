/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrov <gyser.petrov.42@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 22:57:02 by spetrov           #+#    #+#             */
/*   Updated: 2023/05/20 16:21:23 by spetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "get_next_line.c"


int main() {
    int     fd;
    char    *line = malloc(1 * sizeof(char));

    fd = open("text.txt", 256);
    while(line != NULL)
    {
        free(line);
        line = get_next_line(fd);
        printf("%s", line);
    }
    return (0);
}
