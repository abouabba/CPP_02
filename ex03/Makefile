CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = point
SRCS = bsp.cpp Fixed.cpp main.cpp point.cpp
HEADRS = Fixed.hpp point.hpp
OBGS = ${SRCS:.cpp=.o}

all: ${NAME}

${NAME}: ${OBGS}
	${CC} ${CFLAGS} -o ${NAME} ${OBGS}

%.o: %.cpp ${HEADRS}
	${CC} ${CFLAGS} -c $< -o $@

clean:
	rm -rf ${OBGS}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: clean