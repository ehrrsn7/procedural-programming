# Compiler
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

# Target Executables
TARGET = hello.exe
TEST_TARGET = test.exe

# Source Files
SRCS = hello.cpp add.cpp
TEST_SRCS = add_test.cpp add.cpp

# Object Files
OBJS = $(SRCS:.cpp=.o)
TEST_OBJS = $(TEST_SRCS:.cpp=.o)

# Default Target: Build all
all: $(TARGET) $(TEST_TARGET)

# Compile the main program
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile the test program
$(TEST_TARGET): $(TEST_OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Run tests
test: $(TEST_TARGET)
	./$(TEST_TARGET)

# Clean build files
clean:
	del *.o *.exe
