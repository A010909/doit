# Compiler settings
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -Iinclude

# Directory structure
SRC_DIR = src
INC_DIR = include
BUILD_DIR = build
BIN_DIR = bin

# Final executable name
TARGET = $(BIN_DIR)/doit

# Automatically find all .cpp files in the src directory
SRCS = $(wildcard $(SRC_DIR)/*.cpp)

# Generate the .o object file names in the build directory
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SRCS))

# Default target when you just type 'make'
all: directories $(TARGET)

# Rule to link all object files into the final executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^
	@echo "Build successful! Run with ./$(TARGET)"

# Rule to compile each .cpp file into a .o file
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Create necessary directories if they don't exist
directories:
	@mkdir -p $(BUILD_DIR) $(BIN_DIR) data

# Clean up build artifacts
clean:
	rm -rf $(BUILD_DIR)/*.o $(BIN_DIR)/doit
	@echo "Cleaned build and bin directories."

# Mark rules that don't represent physical files as PHONY
.PHONY: all clean directories