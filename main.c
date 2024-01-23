#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "minilibx-linux/mlx.h"
#include "libft/libft.h"
#include "so_long.h"

int lines (fd)
{
	char *line;
	int lines;

	while ()
}

void fd2map(int fd, char **map)
{
    char *line;
	int lines;

    lines = get_lines(fd);
	line = get_next_line(fd);
	printf("%s", line);
    ft_strlcpy(line, *map, ft_strlen(line));
    //free(line);
	printf("%s", map[0]);

    /*map++;
    while (*line)
    {
        line = get_next_line(fd);
        *map = line;
        free(line);
        map++;
    }*/
}

int main(int ac, char **av)
{
    //void	*mlx;
    //void *window;
    char **map;
    int fd;

    fd = open(av[1], O_RDONLY);
    fd2map(fd, map);
	//printf("%s", *map);

	/*mlx = mlx_init();
    if (mlx == NULL)
        return (0);
    window = mlx_new_window(mlx, 666, 666, "so_long");
    mlx_loop(mlx);
    mlx_destroy_display(mlx);
    free(mlx);
    return (0);*/
	close(fd);
}