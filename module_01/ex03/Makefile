# *********************************** Colors ***********************************
NC				:= \033[m
RED				:= \033[0;31m
GREEN			:= \033[1;32m
YELLOW			:= \033[1;33m
BLUE			:= \033[0;34m
PURPLE			:= \033[1;35m
CYAN			:= \033[1;36m

# ******************************** Directories *********************************
INC_DIR			:= .
SRC_DIR			:= .
OBJ_DIR			:= obj

# *********************************** Files ************************************
NAME			:= unnecessary_violence
SRC				:= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ				:= $(SRC:.cpp=.o)
INC				:= Weapon.hpp HumanA.hpp HumanB.hpp

# ****************************** Compiler Options ******************************
CXX				:= c++
CXXFLAGS		:= -Wall -Wextra -Werror -std=c++98
INCFLAGS		:= -I $(INC_DIR)

# ******************************* Other commands *******************************
RM				:= rm -rf
MKDIR			:= mkdir -p

# ******************************** Dependencies ********************************
OBJ_DEP			:= $(addprefix $(OBJ_DIR)/, $(OBJ))
INC_DEP			:= $(addprefix $(INC_DIR)/, $(INC))

# ********************************** Targets ***********************************
all: $(NAME)

$(NAME): $(OBJ_DEP) $(INC_DEP)
	@echo "$(BLUE)Building	$(PURPLE)$(NAME)$(NC)"
	@$(CXX) $(CXXFLAGS) $(OBJ_DEP) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(INC_DEP)
	@$(MKDIR) $(OBJ_DIR)
	@echo "$(GREEN)Compiling	$(YELLOW)$(shell basename $<)$(NC)"
	@$(CXX) $(CXXFLAGS) $(INCFLAGS) -c -o $@ $<

clean:
	@echo "$(RED)Removing	$(YELLOW)Object files$(NC)"
	@$(RM) $(OBJ_DIR)

fclean: clean
	@echo "$(RED)Removing	$(PURPLE)$(NAME)$(NC)"
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
