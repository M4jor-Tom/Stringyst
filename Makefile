OBJS	= stringystTest.o Stringyst.o
SOURCE	= stringystTest.cpp Sources/Stringyst.cpp
HEADER	= Headers/Stringyst.h
OUT	= stringystTest
CC	 = g++
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

stringystTest.o: stringystTest.cpp
	$(CC) $(FLAGS) stringystTest.cpp 

Stringyst.o: Sources/Stringyst.cpp
	$(CC) $(FLAGS) Sources/Stringyst.cpp 

clean:
	rm -f $(OBJS) $(OUT)
