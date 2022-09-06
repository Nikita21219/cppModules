NAME = span
CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

OBJDIR = ./objs
VPATH = .

OBJ = $(addprefix $(OBJDIR)/,$(notdir $(SRC:.cpp=.o)))
SRC = $(wildcard $(addsuffix /*.cpp,$(VPATH)))


all:	$(NAME)

$(OBJDIR)/%.o :	%.cpp $^
	@$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME):	Makefile $(OBJDIR) $(OBJ) span.h Span.hpp
	@$(CC) $(CPPFLAGS) -o $(NAME) $(OBJ) 
	@echo "$(NAME) compile"

$(OBJDIR):
	@if [ ! -d $(OBJDIR) ] ; then mkdir $(OBJDIR); fi

clean:
	@if [ -d $(OBJDIR) ] ; then rm -r $(OBJDIR); fi
	@echo "clean $(NAME) done"


fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re