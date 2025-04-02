CXX = g++
CXXFLAGS = -std=c++17 -Wall -Iinclude
SRC_DIR = src
OBJ_DIR = build
OBJS = $(OBJ_DIR)/PIMInstructionGenerator.o \
       $(OBJ_DIR)/MatrixMultiplicationTranslator.o \
       $(OBJ_DIR)/main.o

TARGET = $(OBJ_DIR)/pim_compiler

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

run: $(TARGET)
	./$(TARGET)
