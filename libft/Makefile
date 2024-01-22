# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 15:23:09 by mbaumgar          #+#    #+#              #
#    Updated: 2024/01/08 13:54:54 by mbaumgar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

CFLAGS		= -Wall -Werror -Wextra
ARFLAGS		= -crs

COLOR		= \033[1;32m
COLOR_END	= \033[0m

# *****************************************************************************
#  ┌─┐┌─┐┬ ┬┬─┐┌─┐┌─┐┌─┐
#  └─┐│ ││ │├┬┘│  ├┤ └─┐
#  └─┘└─┘└─┘┴└─└─┘└─┘└─┘

SRC_FILES	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c \
		ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c \
		ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
		ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
		ft_calloc.c ft_strdup.c ft_putchar.c ft_nlen_base.c ft_nlen_ubase.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putnbr_base.c \
		ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
		ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
		ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJ_FILES	= ${SRC_FILES:.c=.o}

# *****************************************************************************
#  ┬─┐┬ ┬┬  ┌─┐┌─┐
#  ├┬┘│ ││  ├┤ └─┐
#  ┴└─└─┘┴─┘└─┘└─┘

all: ${NAME}

${NAME}: ${OBJ_FILES}
	@${AR} ${ARFLAGS} ${NAME} ${OBJ_FILES}
	@echo "\n📗 ${COLOR}libft.a${COLOR_END}       has been created"

%.o: %.c
	@${CC} ${CFLAGS} -c $< -o $@

clean:
	@${RM} ${OBJ_FILES}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
