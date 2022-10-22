# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmaarifa <mmaarifa@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/21 17:01:08 by mmaarifa          #+#    #+#              #
#    Updated: 2022/10/21 20:33:37 by mmaarifa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  = libft.a
CFLAGS = -Wall -Wextra -Werror -I.
CC    = cc
RM = rm -rf

SRCS = ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c

OBJS  = ${SRCS:.c=.o}

$(NAME):$(OBJS)
	ar -rcs $@ $^

all: $(NAME)


clean:
	$(RM) $(OBJS) 

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
