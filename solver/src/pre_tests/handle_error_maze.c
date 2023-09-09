/*
** EPITECH PROJECT, 2023
** Project make by Clément Barrier and Axel Averly
** File description:
** handle_error_file
*/

#include "solver.h"

size_t size_file(char *filepath)
{
    struct stat sb;
    if (stat(filepath, &sb) == -1) {
        return -1;
    }
    return sb.st_size;
}

int handle_irregular_maze(char *buffer, int file_size)
{
    int j;
    char **maze = my_str_to_array(buffer);
    int line_len = my_strlen(maze[0]);

    for (int i = 0; i < my_array_len(maze) - 2; i++) {
        if (my_strlen(maze[i]) != line_len) {
            return 84;
        }
    }
    return 0;
}

int handle_invalid_character(char *av)
{
    char *buffer;
    int fd = open(av, O_RDONLY);

    if (size_file(av) == -1)
        return 84;
    buffer = malloc(sizeof(char) * size_file(av));
    read(fd, buffer, size_file(av));
    close(fd);
    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] != 'X' && buffer[i] != '*' && buffer[i] != '\n') {
            return 84;
        }
    }
    if (handle_irregular_maze(buffer, size_file(buffer)) == 84)
        return 84;
    return 0;
}

int handle_non_existant_file(char *av)
{
    int fd = open(av, O_RDONLY);
    if (fd < 0) {
        close(fd);
        return 84;
    }
    close(fd);
    if (handle_invalid_character(av) == 84)
        return 84;
    return 0;
}
