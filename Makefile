##
## EPITECH PROJECT, 2022
## make
## File description:
## desc
##

LIB_SRC = \
	src/math/int_find_prime_sup.c \
    src/math/int_is_prime.c \
    src/math/int_power.c \
    src/math/double_len.c \
    src/math/int_len.c \
    src/math/int_square.c \
    src/math/double_abs.c \
    src/math/double_modulo.c \
    src/mem/calloc.c \
    src/mem/memcpy.c \
    src/mem/memmove.c \
    src/mem/memset.c \
    src/mem/realloc.c \
    src/print/print_float.c \
	src/print/print_nbr.c \
	src/print/print_nbr_base.c \
    src/printf/tprintf.c \
    src/printf/flags_functions/char.c \
	src/printf/flags_functions/float.c \
	src/printf/flags_functions/int.c \
	src/printf/flags_functions/modulo.c \
	src/printf/flags_functions/string.c \
    src/char/char_is_digit.c \
    src/char/char_is_upper.c \
    src/char/char_lower.c \
    src/string/str_get_nbr.c \
    src/string/str_alpha_cmp.c \
	src/string/str_case_lower.c \
	src/string/str_case_upper.c \
	src/string/str_cmp.c \
	src/string/str_cpy.c \
	src/string/str_is_alpha.c \
	src/string/str_is_lower.c \
	src/string/str_is_num.c \
	src/string/str_is_printable.c \
	src/string/str_is_upper.c \
	src/string/str_len.c \
	src/string/str_rev.c \
	src/string/str_str.c \
	src/string/str_to_word_array.c \
	src/write/write.c

TEST_SRC = \
	tests/redirect_all_std.c \
	tests/tprintf/tests_tprintf_d.c \
	tests/tprintf/tests_tprintf_f.c \
	tests/tprintf/tests_tprintf_multiple.c \
	tests/tprintf/tests_tprintf_s.c

LIB_OBJ = $(LIB_SRC:.c=.o)
TEST_OBJ = $(TEST_SRC:.c=.o)

LIB = tool_box.a
TEST = tests_tool_box.a

INCLUDES = -I ../include
CFLAGS += -Wall -Wextra $(INCLUDES)

all: $(LIB)

$(LIB): $(LIB_OBJ)
	ar cr $(LIB) $(LIB_OBJ)
	cp $(LIB) ../
	cp includes/*.h ../../includes/

build:$(LIB_OBJ)
	ar cr $(LIB) $(LIB_OBJ)

clean:
	rm -f $(LIB_OBJ) $(TEST_OBJ)

fclean: clean
	rm -f $(LIB) $(TEST)

run_test: $(LIB_OBJ) $(TEST_OBJ)
	gcc -o $(TEST) $(LIB_OBJ) $(TEST_OBJ)  -I includes/ --coverage -lcriterion
	./$(TEST)

re: fclean all

.PHONY: all clean fclean re build run_test
