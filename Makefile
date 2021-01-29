OBJS	= test.o Stringyst.o
SOURCE	= test.cpp Sources/Stringyst.cpp
HEADER	= Headers/Stringyst.h
OUT	= test
CC	 = g++
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

test.o: test.cpp
	$(CC) $(FLAGS) test.cpp 

Stringyst.o: Sources/Stringyst.cpp
	$(CC) $(FLAGS) Sources/Stringyst.cpp 

clean:
	rm -f $(OBJS) $(OUT)
