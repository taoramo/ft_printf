CC = cc
CFLAGS = -g -c -Wall -Wextra -Werror
NAME = libftprintf.a
SRCS = ft_printf.c ft_printf_utils.c ft_putnbr_fd_us.c ft_split_printf.c ft_printf_utils2.c ft_printf_write_funcs.c ft_printf_write_funcs2.c ft_printf_write_funcs3.c ft_split_printf2.c 
INCLUDES = ft_printf.h ./libft/libft.h
LIBFT = ./libft/libft.a
AR = ar rcs
BONUSNAME = libftprintf_bonus.a

OBJS = $(SRCS:.c=.o)
all: $(NAME)

bonus : $(BONUSNAME)

$(BONUSNAME) : $(NAME)
	cp $(NAME) $(BONUSNAME)	

$(NAME) : $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
				@$(AR) $(NAME) $(OBJS)

$(OBJS) : $(LIBFT)
	cc $(CFLAGS) $(SRCS) -I $(INCLUDES) 

$(LIBFT):
	make -C ./libft/

clean:
	rm -rf $(OBJS) 

fclean: clean
	rm -rf $(NAME) $(BONUSNAME) 

re: fclean all
