PUSH_SWAP = push_swap
PUSH_SWAP_BONUS = checker

CC = gcc

CFLAGS = -Wall -Wextra -Werror
define HEADER
 *     .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  .----------------.
 *    | .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. |
 *    | |   ______     | || | _____  _____ | || |    _______   | || |  ____  ____  | || |              | || |    _______   | || | _____  _____ | || |      __      | || |   ______     | |
 *    | |  |_   __ \   | || ||_   _||_   _|| || |   /  ___  |  | || | |_   ||   _| | || |              | || |   /  ___  |  | || ||_   _||_   _|| || |     /  \     | || |  |_   __ \   | |
 *    | |    | |__) |  | || |  | |    | |  | || |  |  (__ \_|  | || |   | |__| |   | || |              | || |  |  (__ \_|  | || |  | | /\ | |  | || |    / /\ \    | || |    | |__) |  | |
 *    | |    |  ___/   | || |  | '    ' |  | || |   '.___`-.   | || |   |  __  |   | || |              | || |   '.___`-.   | || |  | |/  \| |  | || |   / ____ \   | || |    |  ___/   | |
 *    | |   _| |_      | || |   \ `--' /   | || |  |`\____) |  | || |  _| |  | |_  | || |              | || |  |`\____) |  | || |  |   /\   |  | || | _/ /    \ \_ | || |   _| |_      | |
 *    | |  |_____|     | || |    `.__.'    | || |  |_______.'  | || | |____||____| | || |   _______    | || |  |_______.'  | || |  |__/  \__|  | || ||____|  |____|| || |  |_____|     | |
 *    | |              | || |              | || |              | || |              | || |  |_______|   | || |              | || |              | || |              | || |              | |
 *    | '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' |
 *     '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------'

endef
export HEADER

SRC = mondatory/push_swap.c mondatory/list.c mondatory/sort_push_swap.c mondatory/utile_push_swap.c mondatory/check_is_int.c mondatory/check_double.c mondatory/check_sort.c mondatory/check_space.c mondatory/sort_three.c mondatory/sort_five.c mondatory/check_big_integer.c mondatory/ft_free.c mondatory/instruction_swap.c mondatory/instruction_reverse.c mondatory/instruction_r_reverse.c mondatory/instruction_push.c mondatory/libft_char.c mondatory/utils_libft_in_push_swap.c mondatory/index_stack.c
SRC_BONUS = push_swap_bonus/push_swap_bonus.c push_swap_bonus/list_bonus.c push_swap_bonus/utile_push_swap_bonus.c push_swap_bonus/check_is_int_bonus.c push_swap_bonus/check_double_bonus.c push_swap_bonus/checker_bonus.c push_swap_bonus/check_sort_bonus.c push_swap_bonus/check_space_bonus.c push_swap_bonus/check_big_integer_bonus.c push_swap_bonus/ft_free_bonus.c push_swap_bonus/instruction_swap_bonus.c push_swap_bonus/instruction_reverse_bonus.c push_swap_bonus/instruction_r_reverse_bonus.c push_swap_bonus/instruction_push_bonus.c push_swap_bonus/get_next_line.c push_swap_bonus/get_next_line_utils.c push_swap_bonus/libft_char_bonus.c push_swap_bonus/utils_libft_in_push_swap_bonus.c
OBJECTS = $(SRC:.c=.o)
OBJECTS_BONUS = $(SRC_BONUS:.c=.o)

INCLUDES = mondatory/push_swap.h
INCLUDES_bonus = push_swap_bonus/push_swap_bonus.h
INCLUDES_get_next_line =  push_swap_bonus/get_next_line.h

all: $(PUSH_SWAP)
bonus:$(PUSH_SWAP_BONUS)

$(PUSH_SWAP): print_header $(OBJECTS)
		$(CC) $(CFLAGS) $(SRC) -o  $(PUSH_SWAP) -g
$(PUSH_SWAP_BONUS): print_header $(OBJECTS_BONUS)
		$(CC) $(CFLAGS) $(OBJECTS_BONUS) -o $(PUSH_SWAP_BONUS) -g
print_header:
	@echo "\033[0;35m $$HEADER \033[0;35m"
%.o : %.c $(INCLUDES) $(INCLUDES_bonus) $(INCLUDES_get_next_line)
		@echo "\033[0;36m $@ \033[0;36m"
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -rf $(OBJECTS) $(OBJECTS_BONUS)

fclean : clean
	rm -rf $(PUSH_SWAP) $(PUSH_SWAP_BONUS)

re: fclean all