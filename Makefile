# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pba <pba@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/09 11:34:20 by pba               #+#    #+#              #
#    Updated: 2015/11/27 17:10:48 by pba              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all, fdf, mkdir_obj, clean, fclean, re

.SUFFIXES:

NAME		= fdf
CFLAGS		= -Wall -Wextra -Werror -g
HPATH_FDF	= includes/
HPATH_LIBFT = libft/includes/
SPATH		= src/
OPATH		= obj/

SRC			= fdf.c \
			  parser.c \
			  get_map.c \
			  expose_hook.c \
			  key_hook.c \
			  draw.c
			
OBJ			= $(SRC:%.c=$(OPATH)%.o)

all: mkdir_obj $(NAME) 

$(NAME): $(OBJ)
	@echo "\033[32;01mObject files created.\033[0m"
	@echo "\033[36;01mCompiling libft...\033[0m"
	@make re -C libft
	@echo "\033[32;01mlibft.a created.\033[0m"
	@gcc  -o $(NAME) $(OBJ) -lmlx -framework OpenGL -framework Appkit -L./libft/ -lft
	@echo "\033[32;01mLink done.\033[0m"

$(OPATH)%.o: $(SPATH)%.c
	@gcc $(CFLAGS) -c $< -I $(HPATH_FDF) -I $(HPATH_LIBFT) -o $@

mkdir_obj:
	@mkdir -p $(OPATH)
	@echo "\033[32;01mobj/ folder created.\033[0m"

clean:
	@rm -rf $(OBJ)
	@echo "Objects deleted."

fclean: clean
	@rm -rf $(NAME)
	@echo "$(NAME) deleted."

re: fclean all
