##### VARIABLES #####

## COLORS ##

GREEN =\033[0;32m
YELLOW =\033[0;33m
RESET =\033[0m

## TARGET ##

NAME := ClapTrapTest

## COMPILATION ##

CC := g++

CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -Werror
CFLAGS += -std=c++98

ifeq ($(d), 1)
		CFLAGS += -g3
endif

ifeq ($(d), 2)
		CFLAGS += -fsanitize=address,undefined -g3
endif

## SOURCES ##

SRCS += main.cpp
SRCS += ClapTrap.cpp

## INCLUDES ##

INCLUDES_DIR := .

INCLUDES += ClapTrap.hpp

## OBJECTS ##

OBJS := $(SRCS:.cpp=.o)

## RULES ##

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -I$(INCLUDES_DIR) $(OBJS) -o $(NAME)
	@echo "$(GREEN)ClapTrap test compiled!$(RESET)"

$(OBJS): %.o: %.cpp
	$(CC) $(CFLAGS) -I$(INCLUDES_DIR) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re