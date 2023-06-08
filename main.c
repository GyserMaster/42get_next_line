/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrov <gyser.petrov.42@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 22:57:02 by spetrov           #+#    #+#             */
/*   Updated: 2023/06/08 23:38:45 by spetrov          ###   ########.fr       */
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
/*
gcc -c *.c  
lldb a.out (aqui si tienes params)
b main
run
password
gui

n next line
s enter to funcion
*/