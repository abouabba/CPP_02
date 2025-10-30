CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = fixed-point_OV
SRCS = main.cpp Fixed.cpp
HEADRS = Fixed.hpp
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
