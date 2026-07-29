CC = g++

CFLAGS = -Wall -g

TARGET = doit

SOURCES = core/main.cpp core/models.cpp core/models.hpp

all: $(TARGET)

$(TARGET): $(SOURCES)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCES)

clean:
	rm -f $(TARGET)
