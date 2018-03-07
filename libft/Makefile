# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kshimek <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/26 15:59:53 by kshimek           #+#    #+#              #
#    Updated: 2018/03/06 16:30:09 by kshimek          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ANAME = libft.a
ENAME = ft_display_file

SRC = $(ft_putchar.c, ft_putstr.c, ft_memset.c, main.c)
INC = $(*.h)
OBJ = $(patsubst %.c, %.o, $(SRC))
CFLAGS = -Wall -Wextra -Werror

all: $(ANAME)

$(ANAME):
	gcc $(CFLAGS) -c $(SRC) -I $(INC)
	ar rc $(ANAME) $(OBJ)
	ranlib $(ANAME)
	gcc -o $(ENAME) $(ANAME) $(OBJ)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(ANAME)
	/bin/rm -f $(ENAME)

re: fclean all
