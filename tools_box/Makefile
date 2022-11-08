##
## EPITECH PROJECT, 2022
## make
## File description:
## desc
##
SRC = \
	math/int_find_prime_sup.c \
    math/int_is_prime.c \
    math/int_is_prime.c \
    math/int_power.c \
    math/double_len.c \
    math/int_len.c \
    math/int_square.c \
    math/double_abs.c \
    math/double_modulo.c \
    mem/calloc.c \
    mem/memcpy.c \
    mem/memmove.c \
    mem/memset.c \
    mem/realloc.c \
    print/print_float.c \
	print/print_nbr.c \
	print/print_nbr_base.c \
    printf/tprintf.c \
    printf/flags_functions/char.c \
	printf/flags_functions/float.c \
	printf/flags_functions/int.c \
	printf/flags_functions/modulo.c \
	printf/flags_functions/string.c \
    char/char_is_digit.c \
    char/char_is_upper.c \
    char/char_lower.c \
    string/str_get_nbr.c \
	string/str_case_lower.c \
	string/str_case_upper.c \
	string/str_cmp.c \
	string/str_cpy.c \
	string/str_is_alpha.c \
	string/str_is_lower.c \
	string/str_is_num.c \
	string/str_is_printable.c \
	string/str_is_upper.c \
	string/str_len.c \
	string/str_rev.c \
	string/str_str.c \
	string/str_to_word_array.c \
	write/write.c

OBJ = $(SRC:.c=.o)
LIB = tool_box.a

INCLUDES = -I ../include
CFLAGS += -Wall -Wextra $(INCLUDES)

all: $(LIB)

$(LIB): $(OBJ)
	ar cr $(LIB) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(LIB)

re: fclean all

.PHONY: all clean fclean re
