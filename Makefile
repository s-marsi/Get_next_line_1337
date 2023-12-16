CFLAGS = -Wall -Wextra -Werror

AR = ar -r

NAME = getnext.a

MOONDATORY_FILES = get_next_line.c  get_next_line_utils.c 

BONUS_FILES = get_next_line_bonus.c  get_next_line_utils_bonus.c

MONDATORY_O = $(MOONDATORY_FILES:.c=.o)

BONUS_O = $(BONUS_FILES:.c=.o)

$(NAME) : $(MONDATORY_O)
	$(AR) $(NAME) $?

bonus : $(BONUS_O)
	$(AR) $(NAME) $?

all : $(NAME) bonus

clean :
	rm -f $(MONDATORY_O) $(BONUS_O)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean fclean