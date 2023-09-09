/*
** EPITECH PROJECT, 2023
** Project make by Clément Barrier and Axel Averly
** File description:
** my_solver
*/

#include "solver.h"

int get_size(char *path)
{
    struct stat sb;
    if (stat(path, &sb) == -1) {
        return -1;
    }
    return sb.st_size;
}

char **parser(char *path)
{
    char **maze;
    int file_size = get_size(path);
    char *buffer = malloc(sizeof(char) * file_size);
    int fd = open(path, O_RDONLY);
    read(fd, buffer, file_size);
    close(fd);
    maze = my_str_to_array(buffer);
    return maze;
}

int is_perfect(char **maze, int y, int x, map_t *map)
{
    if (y == map->nb_lines - 1 && x == map->nb_col - 1) {
        maze[y][x] = 'o';
        my_put_array(maze);
        return 0;
    }
    if (maze[y][x] == '*')
        maze[y][x] = 'o';

    if (maze[y][x + 1] == '*')
        is_perfect(maze, y, x + 1, map);
    if (maze[y + 1][x] == '*')
        is_perfect(maze, y + 1, x, map);
    if (x > 0 && maze[y][x - 1] == '*')
        is_perfect(maze, y, x - 1, map);
    if (y > 0 && maze[y - 1][x] == '*')
        is_perfect(maze, y - 1, x, map);
    maze[y][x] = '*';
}
