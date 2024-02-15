
EXEC = earthtwo

SRCSPATH = ./srcs/
OBJSPATH = ./objs/
DEPPATH = ./dependencies/
INCPATH = ./includes/

MAIN = ./main/main.cpp
SRCS = $(wildcard $(SRCSPATH)*.cpp)
OBJS = $(patsubst $(SRCSPATH)%.cpp,$(OBJSPATH)%.o,$(SRCS))
DEPS = $(patsubst $(OBJSPATH)%.o,$(DEPPATH)%.d,$(OBJS))
LIBFT = $(LIBFTPATH)*.o

G++ = g++
DEPFLAGS = -MP -MD
CFLAGS = -std=c++17 $(foreach H,$(INCPATH),-I$(H))

all : $(EXEC)

$(EXEC) : $(MAIN) $(OBJS)
	$(G++) $(CFLAGS) $(MAIN) $(OBJS) -o $@

$(OBJSPATH)%.o : $(SRCSPATH)%.cpp
	$(G++) $(CFLAGS) $(DEPFLAGS) -c $< -o $@
	mv $(OBJSPATH)*.d $(DEPPATH)

clean :
	rm -f $(OBJS) $(DEPS)

fclean : clean
	rm -f $(EXEC)

re : fclean all

.PHONY : all clean fclean re

-include $(DEPS)
