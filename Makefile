# E89 Pedagogical & Technical Lab
# project:     rev
# created on:  2022-11-28 - 11:34 +0100
# 1st author:  victor.vandeputte - victor.vandeputte
# description: Makefile

NAME	=	rp_sort

SRCS	=	src/get_digit.c		\
		src/main.c		\
		src/nb_len.c		\
		src/count_nbr.c		\
		src/strchr.c		\
		src/swap_int.c		\
		src/high_nbr.c		\
		src/input.c		\
		src/sa.c		\
		src/sb.c		\
		src/sc.c		\
		src/sd.c		\
		src/pa.c		\
		src/pb.c		\
		src/ra.c		\
		src/rb.c		\
		src/rc.c		\
		src/rra.c		\
		src/rrb.c		\
		src/rrc.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	+=	-W -Wall -Wextra -Werror -Iinclude/

LDFLAGS	+=

RM	=	rm -vf

CC	:=	gcc

ifdef RELEASE
CFLAGS += -O2
endif

ifdef DEBUG
CFLAGS += -g
endif

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS) -o $(NAME)

ar: $(OBJS)
	ar rc $(NAME) $(OBJS)

save:
	git status
	git add Makefile src/*.c include/*.h
	git commit -m "$(NAME) sauvegarde"
	git push

exe:
	make
	./rp_sort

mclean:
	rm src/*.c~ src/*.o include/*.h~ Makefile~

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

# Theses rules do not directly map to a specific file
.PHONY: all clean fclean re ar
