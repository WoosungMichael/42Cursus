NAME = libftprintf.a

CM = cc

FLAG = -Wall -Wextra -Werror

SRC = ft_printf.c ft_printf1.c ft_printf2.c

CNVRT = $(SRC:.c=.o)

INCLUDE = ft_printf.h

all: $(NAME)

$(NAME) : $(CNVRT) $(INCLUDE)
	@ar rcs $(NAME) $(CNVRT) $(INCLUDE)

%.o : %.c $(INCLUDE)
	@$(CM) $(FLAG) -o $@ -c $<

clean:
	@rm -rf $(CNVRT)

fclean: clean
	@rm -rf $(NAME)

re: fclean all