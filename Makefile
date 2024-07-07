# Project Variables
NAME		= push_swap
CC			= cc
CFLAGS		= -Wall -Wextra -Werror -I$(INCDIR) -I$(LIBDIR) -g
RM			= rm -f

# Directories
INCDIR		= include
LIBDIR		= libft
SRCDIR		= src
OBJDIR		= obj

# Source and Object Files
SRC			= $(SRCDIR)/checker.c \
			  $(SRCDIR)/main.c \
			  $(SRCDIR)/stack_instructions.c \
			  $(SRCDIR)/stack_reverse.c \
			  $(SRCDIR)/stack_rotate.c \
			  $(SRCDIR)/stack_ultis.c \
			  $(SRCDIR)/sort.c \
			  $(SRCDIR)/radix_sort.c \
			  $(SRCDIR)/utils.c

OBJ 		= $(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)
LIBFT		= $(LIBDIR)/libft.a

# Header Files
HEADERS		= $(INCDIR)/push_swap.h \
			  $(LIBDIR)/libft.h \
# Default rule
all:		$(LIBFT) $(NAME)

# Compile libft
$(LIBFT):
			$(MAKE) -C $(LIBDIR)

# Compile target
$(NAME): $(OBJ)
			make -C $(LIBDIR)
			$(CC) $(CFLAGS) $(OBJ) -L$(LIBDIR) -lft -o $(NAME)

# Rule for compiling object files
$(OBJDIR)/%.o: $(SRCDIR)/%.c $(HEADERS) Makefile
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