##
## EPITECH PROJECT, 2022
## make
## File description:
## desc
##
SRC = \
	math/int_find_prime_sup.c \
    math/int_get_number.c \
    math/int_is_prime.c \
    math/int_power.c \
    math/int_square.c \
    mem/calloc.c \
    mem/memcpy.c \
    mem/memmove.c \
    mem/memset.c \
    mem/realloc.c \
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
