# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/13 10:41:57 by mbaumgar          #+#    #+#              #
#    Updated: 2024/01/16 16:36:33 by mbaumgar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
LIBFT		= ./libft/libft.a
MAKE_LIBFT	= ${MAKE} --no-print-directory -C ./libft

CFLAGS		= -Wall -Werror -Wextra
ARFLAGS 	= -crs

YELLOW		= \033[1;33m# bold / yellow
RED			= \033[1;31m# bold / red
CYAN		= \033[7;36m# background / cyan
BLINK		= \033[5;2;39m# blink / gray
END			= \033[m# remove style

# *****************************************************************************
#  ┌─┐┌─┐┬ ┬┬─┐┌─┐┌─┐┌─┐
#  └─┐│ ││ │├┬┘│  ├┤ └─┐
#  └─┘└─┘└─┘┴└─└─┘└─┘└─┘

SRCS		= ft_printf.c \
            pf_arg_char.c pf_arg_int.c pf_arg_str.c pf_arg_ptr.c \
            pf_arg_hex.c pf_arg_uint.c pf_arg_pcent.c

OBJS		= ${SRCS:.c=.o}

# *****************************************************************************
#  ┬─┐┬ ┬┬  ┌─┐┌─┐
#  ├┬┘│ ││  ├┤ └─┐
#  ┴└─└─┘┴─┘└─┘└─┘

all: ${NAME}

${LIBFT}: 
	@${MAKE_LIBFT}

${NAME}: ${OBJS} | ${LIBFT}
	@cp $(LIBFT) $(NAME)
	@${AR} ${ARFLAGS} $@ $^
	@echo "📙 ${YELLOW}libftprintf.a${END} has been created \n\n \
	 ${CYAN} ft_printf is READY! ${END}    ${BLINK}Yeah!${END} ᕙ ( •̀ ᴗ •́ )ᕗ\n" 

%.o: %.c
	@${CC} ${CFLAGS} -c $< -o $@

uwu: re
	@${MAKE} --no-print-directory clean

clean:
	@${RM} ${OBJS}
	@${MAKE_LIBFT} clean
	@echo "\n🧹 ${RED}removed:${END} objects"

fclean: clean
	@${RM} ${NAME}
	@${MAKE_LIBFT} fclean
	@echo "🧹 ${RED}removed:${END} archives\n\n \
	 ${CYAN} Everything has been DESTROYED!! ${END} ( •̀ ᴖ •́ )\n"

re: fclean all

.PHONY: all clean fclean re uwu
