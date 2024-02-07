# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-haib <ael-haib@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/21 13:12:07 by ael-haib          #+#    #+#              #
#    Updated: 2024/02/07 13:14:29 by ael-haib         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
	ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
	ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c

BONUSSRC = ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c

OBJECTS = $(SOURCES:.c=.o)
BONUSOBJ = $(BONUSSRC:.c=.o)

CC = gcc
AR = ar
CFLAGS = -Wall -Wextra -Werror

GREEN = \033[32m
RESET = \033[0m


define PRINT_LOADING
	@printf "$(GREEN)Removing!... ["
	@for i in $(shell seq 0 10 800); do \
		printf "▓"; \
		sleep 0.01; \
	done
	@printf "] 100%%$(RESET)\n"
endef

define PRINT_LOADINGTWO
	@printf "$(GREEN)Compiling!... ["
	@for i in $(shell seq 0 10 800); do \
		printf "▓"; \
		sleep 0.008; \
	done
	@printf "] 100%%$(RESET)\n"
endef


all: $(NAME)

$(NAME): $(OBJECTS) $(BONUSOBJ)
	$(PRINT_LOADINGTWO)
	@$(AR) -rcs $@ $^ >/dev/null

%.o: %.c
	@$(CC) -c $(CFLAGS) $<
	


clean:
	$(PRINT_LOADING)
	@rm -f $(OBJECTS) $(BONUSOBJ)


fclean: clean
	@rm -f $(NAME)
	@clear
	

re: fclean all

.PHONY: all clean fclean re
