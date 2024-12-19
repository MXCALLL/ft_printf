SRCS = ft_putchar.c ft_printf.c ft_puthex_low.c ft_puthex_up.c ft_putbase.c ft_putdecimal.c ft_putdigit.c ft_putstr.c
CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJS = ${SRCS:.c=.o}
NAME = libftprintf.a
HEADER = ft_printf.h
ARCHIVE = ar rcs
RM = rm -f

all: ${NAME}

${NAME}: ${OBJS}
	${ARCHIVE} ${NAME} ${OBJS}

%.o: %.c ${HEADER}
	${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} *.o

fclean: clean
	${RM} ${NAME}

re: fclean all