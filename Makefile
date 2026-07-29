CC = g++
CFLAGS = -Wall -g

TARGET = doit

SOURCES = main.cpp models.cpp 

OBJECTS = $(SOURCES:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS)

%.o: %.cpp core/models.hpp
	$(CC) $(CFLAGS) -c $< -o $@

# Run target for quick testing
run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET) core/*.o