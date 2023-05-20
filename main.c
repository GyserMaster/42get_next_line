/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrov <gyser.petrov.42@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 22:57:02 by spetrov           #+#    #+#             */
/*   Updated: 2023/04/23 22:57:02 by spetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "get_next_line.c"


int main() {
    int     fd;
    char    *singleLine = malloc(1 * sizeof(char));

    fd = open("teste", 256);
    while(singleLine != NULL)
    {
        free(singleLine);
        singleLine = get_next_line(fd);
        printf("%s", singleLine);
    }
    return (0);
}
