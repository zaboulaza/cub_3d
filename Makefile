# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/26 10:15:42 by nsmail            #+#    #+#              #
#    Updated: 2025/10/26 11:43:58 by nsmail           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cub3D

SRCS = 	src/main.c \
		free/free.c \
		parsing/parsing_general.c \
		
		

# Bibliothèques
MLX_DIR = minilibx-linux
LIBFT_DIR = libft
GNL_DIR = get_next_line

MLX = $(MLX_DIR)/libmlx.a
LIBFT = $(LIBFT_DIR)/libft.a
GNL = $(GNL_DIR)/get_next_line.a

INCLUDES = -I. -I$(LIBFT_DIR) -I$(GNL_DIR) -I$(MLX_DIR)

CC = cc
CFLAGS = -Wall -Wextra -Werror -g3

OBJS_DIR = obj
OBJS = $(patsubst %.c,$(OBJS_DIR)/%.o,$(SRCS))

# Progress bar support
TOTAL := $(words $(SRCS))
BUILD_DIR := .build



.PHONY: all clean fclean re libft get_next_line obj

all: $(NAME)

$(NAME): $(LIBFT) $(GNL) $(MLX) $(OBJS) | obj $(BUILD_DIR)
	@printf "\033[35m[BUILD] Linking (%d objects)...\033[0m\r" "$(words $(OBJS))"
	@{ $(CC) $(CFLAGS) $(OBJS) $(MLX) -lX11 -lXext -lm $(LIBFT) $(GNL) -o $(NAME) > /dev/null 2>&1; } \
	|| { echo "\n\033[31m[ERROR] Linking failed — showing verbose output:\033[0m"; $(CC) $(CFLAGS) $(OBJS) $(MLX) -lX11 -lXext -lm $(LIBFT) $(GNL) -o $(NAME); exit 1; }
	@echo "\033[35m[OK] $(NAME) prêt\033[0m"

obj:
	@mkdir -p $(OBJS_DIR)

$(BUILD_DIR):
	@mkdir -p $(BUILD_DIR)
	@> $(BUILD_DIR)/done

$(OBJS_DIR)/%.o: %.c | obj $(BUILD_DIR)
	@mkdir -p $(@D)
	@./scripts/compile_and_report.sh "$(CC)" "$(CFLAGS) $(INCLUDES)" "$<" "$@" $(TOTAL) $(BUILD_DIR) || exit 1

$(LIBFT):
	@$(MAKE) -s -C $(LIBFT_DIR) > /dev/null 2>&1 || { echo "\n\033[31m[ERROR] build libft failed\033[0m"; $(MAKE) -C $(LIBFT_DIR); exit 1; }

$(GNL):
	@$(MAKE) -s -C $(GNL_DIR) > /dev/null 2>&1 || { echo "\n\033[31m[ERROR] build get_next_line failed\033[0m"; $(MAKE) -C $(GNL_DIR); exit 1; }

$(MLX):
	@$(MAKE) -s -C $(MLX_DIR) > /dev/null 2>&1 || { echo "\n\033[31m[ERROR] build minilibx failed\033[0m"; $(MAKE) -C $(MLX_DIR); exit 1; }

clean:
	@echo "Cleaning project object files..."
	@$(RM) $(OBJS)
	@$(MAKE) -s -C $(LIBFT_DIR) clean > /dev/null 2>&1 || $(MAKE) -C $(LIBFT_DIR) clean
	@$(MAKE) -s -C $(GNL_DIR) clean > /dev/null 2>&1 || $(MAKE) -C $(GNL_DIR) clean
	@rm -f $(BUILD_DIR)/done 2>/dev/null || true

fclean: clean
	@echo "Removing binaries and libraries..."
	@$(RM) $(NAME)
	@$(MAKE) -s -C $(LIBFT_DIR) fclean > /dev/null 2>&1 || $(MAKE) -C $(LIBFT_DIR) fclean
	@$(MAKE) -s -C $(GNL_DIR) fclean > /dev/null 2>&1 || $(MAKE) -C $(GNL_DIR) fclean

re: fclean all

# Convenience: run tests or debug build
debug: CFLAGS += -g
debug: re
