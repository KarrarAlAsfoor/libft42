# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Karrar <kahamza@student.42wolfsburg.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 12:56:10 by Karrar            #+#    #+#              #
#    Updated: 2022/12/30 19:32:38 by Karrar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

AR = ar

NAME = libft.a

ARFLAGS = rc

CFLAGS = -Wall -Werror -Wextra

SRCFILES = 	ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c

BNSFILES =	ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c

OBJFILES = ${SRCFILES:.c=.o}

BNSOBJS = ${BNSFILES:.c=.o}

.c.o :
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME) : $(OBJFILES)
	$(AR) $(ARFLAGS) $(NAME) $(OBJFILES)

bonus : $(OBJFILES) $(BNSOBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJFILES) $(BNSOBJS)

all : $(NAME)
	
fclean : clean
	rm -rf $(NAME)

clean :
	rm -rf $(OBJFILES) $(BNSOBJS)

re : fclean $(NAME)

.PHONY: bonus all clean fclean re