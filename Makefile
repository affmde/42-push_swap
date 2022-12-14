NAME = push_swap
FILES = check_validaty.c handle_errors.c check_sorted.c init_stack.c clean.c fill_stack.c stack_base_actions.c \
handle_cases.c swaps.c pushes.c rotations.c reverses.c sort_utils.c length_3.c parse.c length_5.c length_100.c sort_utils_2.c portion_utils.c get_array.c
SRCS = $(addprefix ./srcs/, $(FILES))
FLAGS = -Wall -Werror -Werror
LIBFT = libft.a
LSRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
ft_strnstr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_strrchr.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_nbr_of_digits.c \
ft_power_of.c get_next_line.c ft_isspace.c ft_abs.c ft_min.c ft_max.c
LOBJECTS = $(LSRCS:.c=.o)
LODEST = $(addprefix ./libft/, $(LOBJECTS))

all: $(NAME)

$(NAME): $(SRCS) main.c
	@make -C libft
	cc $(FLAGS) -o $(NAME) main.c $(SRCS) -L. ./libft/$(LIBFT)

clean:
	rm -f $(LODEST)

fclean: clean
	rm -f $(NAME) libft/$(LIBFT)

re: fclean all

$(LIBFT):
	make -C libft
