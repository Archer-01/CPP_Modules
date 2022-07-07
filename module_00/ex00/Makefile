# *********************************** Colors ***********************************
NC				:= \033[m
RED				:= \033[0;31m
GREEN			:= \033[1;32m
YELLOW			:= \033[1;33m
BLUE			:= \033[0;34m
PURPLE			:= \033[1;35m

# ******************************** Directories *********************************
OBJ_DIR		:= obj

# *********************************** Files ************************************
NAME		:= megaphone
SRC			:= megaphone.cpp
OBJ			:= $(SRC:.cpp=.o)

# ****************************** Compiler Options ******************************
CXX			:= c++
CXXFLAGS	:= -Wall -Wextra -Werror -std=c++98

# ******************************* Other commands *******************************
MKDIR		:= mkdir -p
RM			:= rm -rf

# ******************************** Dependencies ********************************
OBJ_DEP		:= $(addprefix $(OBJ_DIR)/, $(OBJ))

# ********************************** Targets ***********************************
all: $(NAME)

$(NAME): $(OBJ_DEP)
	@echo "$(BLUE)Building	$(PURPLE)$(NAME)$(NC)"
	@$(CXX) $(CXXFLAGS) $(OBJ_DEP) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	@$(MKDIR) $(OBJ_DIR)
	@echo "$(GREEN)Compiling	$(YELLOW)$(shell basename $<)$(NC)"
	@$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	@echo "$(RED)Removing	$(YELLOW)Object files$(NC)"
	@$(RM) $(OBJ_DIR)

fclean: clean
	@echo "$(RED)Removing	$(PURPLE)$(NAME)$(NC)"
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
