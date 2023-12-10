CFLAGS = -Wall -Wextra -Werror

AR = ar -r

NAME = getnext.a

FILES = get_next_line.c ft_strlen.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strchr.c

FILES_O = $(FILES:.c=.o)

all : $(NAME)

$(NAME) : $(FILES_O)
	$(AR) $(NAME) $(FILES_O)

clean :
	rm -f $(FILES_O) a.txt

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean fclean