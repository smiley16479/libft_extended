# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adtheus <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/20 18:52:42 by adtheus           #+#    #+#              #
#    Updated: 2019/10/12 20:16:43 by adtheus          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= 	ft_isascii.c ft_memcpy.c ft_strlcat.c ft_substr.c \
			ft_isdigit.c ft_memmove.c ft_strlcpy.c ft_tolower.c \
			ft_atoi.c ft_isprint.c ft_memset.c ft_strlen.c ft_toupper.c \
			ft_bzero.c ft_itoa.c ft_split.c ft_strncmp.c ft_calloc.c \
			ft_memccpy.c ft_strchr.c  ft_strnstr.c ft_isalnum.c ft_memchr.c \
			ft_strdup.c ft_strrchr.c ft_isalpha.c ft_memcmp.c ft_strjoin.c \
			ft_strtrim.c

HEADER	= includes/
		
OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

GCC		= gcc
AR		= ar rcs 
RM		= rm -f

CFLAGS	=	-Wall -Wextra -Werror

.c.o:
			${GCC} ${CFLAGS} -I ${HEADER} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS} ${GCH}
			${AR} ${NAME} ${OBJS} 

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
