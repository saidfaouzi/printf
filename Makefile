FILES = ft_printf.c ft_putchar.c ft_base.c ft_putnbr.c ft_putptr.c ft_putstr.c
CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
MANFILES = ${FILES:%.c=%.o}
CMD = ar rc
CLEA = rm -f

all:${NAME}

${NAME}:${MANFILES}
	${CMD} ${NAME} ${MANFILES}

clean:
	${CLEA} ${MANFILES}

fclean:clean
	${CLEA} ${NAME}

re:fclean all

.PHONY:	all clean fclean re
