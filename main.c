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
#include "get_next_line_utils.c"
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("read_error.txt", O_RDONLY);
	if (fd == -1)
	{
		perror("open");
		return (1);
	}
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return (0);
}
/*
int main() {
    int     fd;
    char    *line = malloc(1 * sizeof(char));

    fd = open("read_error.txt", 256);
    while(line != NULL)
    {
        
        line = get_next_line(fd);
        printf("=>%s", line);
		free(line);
    }
    return (0);
}
*/
/*
	int main() {
    FILE *file = fopen("text.txt", "r");
    if (file == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    char *line;
    while ((line = get_next_line(fileno(file))) != NULL) {
        printf("%s", line);
        free(line); // Libera la memoria asignada por get_next_line
    }

    fclose(file);
    return 0;
}
*/
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