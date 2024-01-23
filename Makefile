all :
	gcc main.c get_next_line.c minilibx-linux/libmlx_Linux.a -L minilibx-linux -lXext -lX11 -Llibft -lft -o so_long