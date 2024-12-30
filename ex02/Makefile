C++ = c++
CPP_FLAGS = -std=c++98 -g

SRCS =	Account.cpp \
		tests.cpp

HEADR =  Account.hpp \
		
OBJS = $(SRCS:.cpp=.o)

NAME = ex02

all: $(NAME)

$(NAME):$(OBJS)
		$(C++) $(CPP_FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
		$(C++) $(CPP_FLAGS) -c $< -o $@

clean:
		rm -f $(OBJS)

fclean:
		make clean
		rm -f $(NAME)

re:
	make fclean
	make all

.PHONY: all clean fclean re
 