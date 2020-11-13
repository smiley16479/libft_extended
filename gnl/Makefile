
SRCS	=	get_next_line_bonus.c get_next_line_utils_bonus.c

NAME	=	gnl.a

OBJS	=	${SRCS:.c=.o}

BUF_SIZE=	-DBUFFER_SIZE=32

HEADER	=	-I../libft#get_next_line_bonus.h

GCC		=	gcc
AR		=	ar rcs
RM		=	rm -f

CFLAGS	=	-Wall -Wextra -Werror

.c.o:
			${GCC} ${CFLAGS} ${BUF_SIZE} ${HEADER} -L../libft -lft -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
#			cp ../libft/libft.a ./$(NAME)
			${AR} ${NAME} ${OBJS}

all:		${NAME}

clean:		
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
