NAME	= fixed

SRCS	= main.cpp Fixed.cpp
OBJS	= ${SRCS:.cpp=.o}
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

all: ${NAME}

.cpp.o:
	@$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

${NAME}: ${OBJS}
	@${CC} $(OBJS) $(CFLAGS) -o ${NAME}

clean:
	@${RM} ${OBJS}

fclean:
	@${RM} ${NAME}

re: fclean all

.PHONY: clean fclean re all