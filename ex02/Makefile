# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/20 11:30:18 by hchakoub          #+#    #+#              #
#    Updated: 2022/06/20 15:29:49 by hchakoub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP=c++
CPPFLAGS= -Wall -Wextra -Werror -std=c++98
NAME=a.out
SRC=main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
OBJ=$(SRC:.cpp=.o) 

all: $(NAME)

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CPP) $(CPPFLAGS) $^ -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
	