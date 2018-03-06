# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kshimek <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/26 15:59:53 by kshimek           #+#    #+#              #
#    Updated: 2018/03/06 15:15:48 by kshimek          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ANAME = libft.a
ENAME = ft_display_file

SRC = $(wildcard *.c)
INC = $(wildcard *.h)
OBJ = $(patsubst %.c, %.o, $(SRC))
GGCFLAGS = -Wall -Wextra -Werror

all: $(ANAME)

$(ANAME):
	gcc $(GGCFLAGS) -c $(SRC) -I$(INC)
	ar rc $(ANAME) $(OBJ)
	ranlib $(ANAME)
	gcc -o $(ENAME) $(ANAME) $(OBJ)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(ANAME)
	/bin/rm -f $(ENAME)

re: fclean all
