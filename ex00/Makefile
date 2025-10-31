# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/31 13:25:59 by hporta-c          #+#    #+#              #
#    Updated: 2025/10/31 15:10:11 by hporta-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -I. -std=c++98
SRCS = main.cpp Animal.cpp Dog.cpp
OBJS = $(SRCS:.cpp=.o)
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
		$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: fclean clean all 