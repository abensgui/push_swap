CC = cc

CFLAGS = -Wall -Werror -Wextra

SRCS =  ft_lstadd_back.c\
		ft_lstadd_front.c\
		ft_lstnew.c\
		ft_atoi.c\
		ft_isdigit.c\
		sa.c\
		sb.c\
		ss.c\
		pa.c\
		pb.c\
		ra.c\
		rb.c\
		rra.c\
		rrb.c\
		ft_swap4.c\
		ft_swap3.c\
		ft_swap5.c\
		ft_index.c\
		ft_swap.c\
		ft_utils.c\
		ft_push_b.c\
		push_swap.c\

BONUS = checker_bonus/get_next_line_utils_bonus.c\
		checker_bonus/ft_dup_bonus.c\
		checker_bonus/get_next_line_bonus.c\
		checker_bonus/ft_lstadd_back_bonus.c\
		checker_bonus/ft_lstadd_front_bonus.c\
		checker_bonus/ft_lstnew_bonus.c\
		checker_bonus/ft_atoi_bonus.c\
		checker_bonus/ft_strcmp_bonus.c\
		checker_bonus/sa_bonus.c\
		checker_bonus/sb_bonus.c\
		checker_bonus/ss_bonus.c\
		checker_bonus/pa_bonus.c\
		checker_bonus/pb_bonus.c\
		checker_bonus/ra_bonus.c\
		checker_bonus/rb_bonus.c\
		checker_bonus/rr_bonus.c\
		checker_bonus/rra_bonus.c\
		checker_bonus/rrb_bonus.c\
		checker_bonus/rrr_bonus.c\
		checker_bonus/size_list_bonus.c\
		checker_bonus/checker.c\


OBJS_BONUS = ${BONUS:.c=.o}

OBJS = ${SRCS:.c=.o}

NAME = push_swap

NAME_BONUS = checker

REM = rm -f

all : $(NAME)
$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS)  -o $(NAME)

bonus : $(NAME_BONUS)
$(NAME_BONUS) : $(OBJS_BONUS)
	$(CC) $(CFLAGS) $(OBJS_BONUS)  -o $(NAME_BONUS)

clean :
	${REM} ${OBJS} ${OBJS_BONUS}

fclean : clean
	${REM} ${NAME} ${NAME_BONUS}

re : fclean all

.PHONY : all clean fclean bonus re