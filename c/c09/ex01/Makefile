SRC	= ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
PRE	= ./srcs/
SRCS = ${addprefix ${PRE}, ${SRC}}
OBJS	= ${SRCS:.c=.o}
HEAD	= ./includes/
NAME	= libft.a
AR	= ar rc
RM	= rm -f
LIB	= ranlib
CC	= cc
CFLAGS	= -Wall -Wextra -Werror

all:	${NAME}

.c.o:
	${CC} ${CFLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	${AR} ${NAME} $^
	${LIB} ${NAME}

clean: 
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re