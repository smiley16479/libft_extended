# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/20 18:52:42 by adtheus           #+#    #+#              #
#    Updated: 2020/11/08 00:25:06 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftx.a
EXTEND	=	gnl.a

DIR_gnl	=	gnl
SRC_gnl	=	get_next_line_bonus.c	get_next_line_utils_bonus.c gnl_2000.c
OBJ_gnl	=	${addprefix $(DIR_gnl)/,${SRC_gnl:.c=.o}}

DIR_lf	=	libft
SRC_lf	=	ft_isascii.c		ft_memcpy.c			ft_strlcat.c	ft_substr.c			ft_isdigit.c\
			ft_memmove.c		ft_strlcpy.c		ft_tolower.c	ft_atoi.c			ft_isprint.c\
			ft_memset.c			ft_strlen.c			ft_toupper.c	ft_bzero.c			ft_itoa.c\
			ft_split.c			ft_strncmp.c		ft_calloc.c		ft_memccpy.c		ft_strcmp.c\
			ft_strchr.c			ft_isspace.c\
			ft_strnstr.c		ft_isalnum.c		ft_memchr.c		ft_strdup.c			ft_strrchr.c\
			ft_isalpha.c		ft_memcmp.c			ft_strjoin.c	ft_strtrim.c		ft_strmapi.c\
			ft_putchar_fd.c		ft_putstr_fd.c		ft_putendl_fd.c	ft_putnbr_fd.c		ft_lstnew.c	\
			ft_lstadd_front.c	ft_lstsize.c		ft_lstlast.c	ft_lstadd_back.c	ft_lstdelone.c\
			ft_lstclear.c		ft_lstiter.c		ft_lstmap.c
OBJ_lf	=	${addprefix $(DIR_lf)/, ${SRC_lf:.c=.o}}

DIR_pf	=	printf
SRC_pf	=	ft_check_simple.c	ft_display_utils.c	initializer_func.c printf.c\
			ft_display.c		ft_put_type.c		printf_utils.c
OBJ_pf	=	${addprefix $(DIR_pf)/, ${SRC_pf:.c=.o}}

GCC		=	cc
HEADER	=	-Ilibft
DEFINE	=	-DBUFFER_SIZE=32
AR		=	ar rcs 
RM		=	rm -f

CFLAGS	=	-Wall -Wextra -Werror

.c.o:
			${GCC} ${CFLAGS} $(HEADER) $(DEFINE) -c $< -o ${<:.c=.o}

${NAME}:	${OBJ_gnl} $(OBJ_lf) $(OBJ_pf)
			${AR} ${NAME} ${OBJ_gnl} $(OBJ_lf) $(OBJ_pf)
			@echo libftx.a created 😃
			
all:		${NAME}

clean:		
			${RM} ${OBJ_gnl} $(OBJ_lf) $(OBJ_pf)

fclean:		clean
			${RM} ${NAME}

re:			fclean all

show    :
			@echo "SRC_gnl	: ${SRC_gnl}\n"
			@echo "SRC_lf	: ${SRC_lf}\n"
			@echo "SRC_pf	: ${SRC_pf}\n"
			@echo "OBJ_gnl	: ${OBJ_gnl}\n"
			@echo "OBJ_lf	: ${OBJ_lf}\n"
			@echo "OBJ_pf	: ${OBJ_pf}\n"

.PHONY:		all clean fclean re
