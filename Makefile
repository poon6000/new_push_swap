# Project Variables
NAME		= push_swap
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror -I$(INCDIR) -I$(LIBDIR)
RM			= rm -f

# Directories
INCDIR		= includes
LIBDIR		= libft
SRCDIR		= src
OBJDIR		= obj

# Source and Object Files
SRC			= $(SRCDIR)/checker.c \
			  $(SRCDIR)/main.c \
			  $(SRCDIR)/operation.c \
			  $(SRCDIR)/operation_2.c \
			  $(SRCDIR)/operation_3.c \
			  $(SRCDIR)/operation_4.c \
			  $(SRCDIR)/sort.c \
			  $(SRCDIR)/radix_sort.c \
			  $(SRCDIR)/utils.c

OBJ 		= $(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)
LIBFT		= $(LIBDIR)/libft.a

# Default rule
all:		$(LIBFT) $(NAME)

# Compile libft
$(LIBFT):
			@$(MAKE) -C $(LIBDIR)

# Rule for building the target executable
$(NAME): $(OBJ)
			$(CC) $(CFLAGS) $(OBJ) -L$(LIBDIR) -lft -o $(NAME)

# Rule for compiling object files
$(OBJDIR)/%.o: $(SRCDIR)/%.c
			mkdir -p $(OBJDIR)
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJDIR)/*
			$(MAKE) -C $(LIBDIR) clean
			
fclean:	clean
			$(RM) $(NAME)
			$(MAKE) -C $(LIBDIR) fclean

re: fclean all

# Phony targets represent actions not files
.PHONY: all libft clean fclean re