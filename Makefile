CXX = g++
CXXFLAGS = -std=c++17 -Iinclude

# Output directories
OBJ_DIR = obj
LIB_DIR = lib

# Libraries
STATIC_LIBS = $(LIB_DIR)/libPoint.a $(LIB_DIR)/libApple.a $(LIB_DIR)/libBoard.a $(LIB_DIR)/libSnake.a
DYNAMIC_LIBS = $(LIB_DIR)/libPoint.so $(LIB_DIR)/libApple.so $(LIB_DIR)/libBoard.so $(LIB_DIR)/libSnake.so

# Source files
SRC_FILES = src/point.cpp src/apple.cpp src/board.cpp src/snake.cpp

# Object files
OBJ_FILES = $(SRC_FILES:src/%.cpp=$(OBJ_DIR)/%.o)

# Targets
all: $(STATIC_LIBS) $(DYNAMIC_LIBS) app

$(OBJ_DIR)/%.o: src/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(LIB_DIR)/lib%.a: $(OBJ_DIR)/%.o
	@mkdir -p $(LIB_DIR)
	ar rcs $@ $<

$(LIB_DIR)/lib%.so: $(OBJ_DIR)/%.o
	@mkdir -p $(LIB_DIR)
	$(CXX) -shared -o $@ $<

app: main.cpp $(STATIC_LIBS)
	$(CXX) $(CXXFLAGS) main.cpp -L$(LIB_DIR) -lPoint -lApple -lBoard -lSnake -o app

clean:
	rm -rf $(OBJ_DIR) $(LIB_DIR) app