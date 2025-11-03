# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/01 13:17:21 by hporta-c          #+#    #+#              #
#    Updated: 2025/11/03 15:51:20 by hporta-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = InterfaceRecap
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -I. -std=c++98
SRCS = main.cpp AMateria.cpp Ice.cpp Cure.cpp ICharacter.cpp IMateriaSource.cpp 
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