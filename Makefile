CFLAGS = -Wall -Wextra -Werror

AR = ar -r

NAME = getnext.a

FILES = get_next_line.c  get_next_line_utils.c get_next_line_bonus.c  get_next_line_utils_bonus.c

FILES_O = $(FILES:.c=.o)


$(NAME) : $(FILES_O)
	$(AR) $(NAME) $?

bonus : $(FILES_O)
	$(AR) $(NAME) $?

all : $(NAME)

clean :
	rm -f $(FILES_O)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean fclean