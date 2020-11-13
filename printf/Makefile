# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/20 18:52:42 by adtheus           #+#    #+#              #
#    Updated: 2020/11/07 20:27:28 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= 	ft_check_simple.c	ft_display_utils.c	initializer_func.c printf.c\
			ft_display.c		ft_put_type.c		printf_utils.c

HEADER	= printf.h
		
OBJS	= ${SRCS:.c=.o}

NAME	= libftprintf.a

GCC		= gcc
AR		= ar rcs 
RM		= rm -f

CFLAGS	=	-Wall -Wextra -Werror

.c.o:
			${GCC} ${CFLAGS} -c $< -o ${<:.c=.o}
			#${GCC} ${CFLAGS} -I ${HEADER} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
##			make -C ../libft
# ${AR} ${NAME} -l libft.a ${OBJS}
##			cp ../libft/libft.a ./$(NAME)
			${AR} ${NAME} ${OBJS}

#ANCIENNEMENT :
# ${GCC} ${CFLAGS} ./libft/libft.a ${OBJS}
#			ar rc $(NAME) $(OBJS)
#			ranlib $(NAME)

all:		${NAME}

test:		
			${GCC} ${CFLAGS} -g3 -fsanitize=address printf.c printf_utils.c \
			initializer_func.c ft_check_simple.c \
			ft_display.c ft_put_type.c ft_display_utils.c

clean:		
			${RM} ${OBJS}
			make fclean -C ../libft 

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
