# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frcarval <xicoleite23@gmail.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/21 17:40:50 by frcarval          #+#    #+#              #
#    Updated: 2021/10/29 04:10:31 by frcarval         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES	=	1part/ft_atoi.c			\
			1part/ft_bzero.c		\
			1part/ft_isalnum.c		\
			1part/ft_isalpha.c		\
			1part/ft_isascii.c		\
			1part/ft_isdigit.c		\
			1part/ft_isprint.c		\
			1part/ft_memchr.c		\
			1part/ft_memcmp.c		\
			1part/ft_memcpy.c		\
			1part/ft_memmove.c		\
			1part/ft_memset.c		\
			1part/ft_strchr.c		\
			1part/ft_strlcat.c		\
			1part/ft_strlcpy.c		\
			1part/ft_strlen.c		\
			1part/ft_strncmp.c		\
			1part/ft_strnstr.c		\
			1part/ft_strrchr.c		\
			1part/ft_tolower.c		\
			1part/ft_toupper.c		\
			1part/ft_strdup.c		\
			1part/ft_calloc.c		\
			2part/ft_strtrim.c		\
			2part/ft_substr.c		\
			2part/ft_strjoin.c		\
			2part/ft_itoa.c			\
			2part/ft_strmapi.c		\
			2part/ft_striteri.c 	\
			2part/ft_putchar_fd.c	\
			2part/ft_putstr_fd.c	\
			2part/ft_putendl_fd.c	\
			2part/ft_putnbr_fd.c	\
			2part/ft_split.c

BONUS	=	bonus/ft_lstlast.c		\
			bonus/ft_lstadd_back.c	\
			bonus/ft_lstnew.c		\
			bonus/ft_lstadd_front.c	\
			bonus/ft_lstsize.c		\
			bonus/ft_lstclear.c		\
			bonus/ft_lstdelone.c	\
			bonus/ft_lstmap.c		\
			bonus/ft_lstiter.c
			
NAME 	=	libft.a
OBJECTS	=	$(SOURCES:.c=.o)
BONUS.O	=	$(BONUS:.c=.o)
GCCW	=	gcc	-Wall -Wextra -Werror -I.

all:		$(NAME)

$(NAME):	$(OBJECTS)
			ar rcs $(NAME) $(OBJECTS)

bonus:		$(NAME) $(BONUS.O)
			ar -rcs $(NAME) $(BONUS.O)

clean:		
			rm -f $(OBJECTS) $(BONUS.O)

fclean:		clean
			rm -f $(NAME)

re:			fclean $(NAME)

.PHONY:	all clean fclean re