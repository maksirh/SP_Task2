CC = g++
CXXFLAGS = -Wall -Wextra -std=c++17

TARGET = task2
SRC = Source.cpp calculator.cpp
OBJ = $(SRC:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CXXFLAGS) -o $@ $^

clean:
	del *.o task2	
