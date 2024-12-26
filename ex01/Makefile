C++ = c++
CPP_FLAGS = -Wall -Wextra -Werror -std=c++98 -g

SRCS =	Contact.cpp \
		PhoneBook.cpp \
		main.cpp

HEADR = ex01.hpp \
		Contact.hpp \
		PhoneBook.hpp \
		
OBJS = $(SRCS:.cpp=.o)

NAME = PhoneBook

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
 