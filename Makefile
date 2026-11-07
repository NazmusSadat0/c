
CC = gcc
CFLAGS = -Wall -Wextra -std=c11

TARGET = student

OBJ = main.o student.o marks.o

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

main.o: main.c student.h marks.h
	$(CC) $(CFLAGS) -c main.c

student.o: student.c student.h
	$(CC) $(CFLAGS) -c student.c

marks.o: marks.c marks.h
	$(CC) $(CFLAGS) -c marks.c

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJ) $(TARGET)
