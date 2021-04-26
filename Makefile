CC = clang
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
SRC =   ft_atoi.c \
        ft_isalnum.c \
        ft_isdigit.c \
        ft_memccpy.c \
        ft_memcpy.c \
        ft_putchar_fd.c \
        ft_putstr_fd.c \
        ft_strdup.c \
        ft_strlcpy.c \
        ft_strncmp.c \
        ft_strtrim.c \
        ft_toupper.c \
        ft_bzero.c \
        ft_isalpha.c \
        ft_isprint.c \
        ft_memchr.c \
        ft_memmove.c \
        ft_putendl_fd.c \
        ft_split.c \
        ft_strjoin.c \
        ft_strlen.c \
        ft_strnstr.c \
        ft_substr.c \
        ft_calloc.c \
        ft_isascii.c \
        ft_itoa.c \
        ft_memcmp.c \
        ft_memset.c \
        ft_putnbr_fd.c \
        ft_strchr.c \
        ft_strlcat.c \
        ft_strmapi.c \
        ft_strrchr.c \
        ft_tolower.c \
        ft_lstadd_back.c \
        ft_lstadd_front.c \
        ft_lstclear.c \
        ft_lstdelone.c \
        ft_lstiter.c \
        ft_lstlast.c \
        ft_lstmap.c \
        ft_lstnew.c \
        ft_lstsize.c \
        ft_swap.c \
        ft_rev_int_tab.c \
        ft_strupcase.c \
        ft_strlowcase.c \
        ft_strcapitalize.c \
        ft_putnbr_base.c \
        ft_recursive_factorial.c \
        ft_recursive_power.c \
        ft_sqrt.c \
        ft_find_next_prime.c \
        ft_foreach.c \
        ft_sort_strtab.c
OBJ = $(SRC:%.c=%.o)
OBJ2 = $(SRC2:%.c=%.o)
RM = rm -rf
MOVE = mkdir Objects && mv *.o Objects

$(NAME):	$(OBJ)
		ar r $(NAME) *.o
		ranlib $(NAME)
		$(MOVE)

all:	$(NAME)

clean:
	$(RM) Objects

fclean: clean
	$(RM) $(NAME)

re: fclean all