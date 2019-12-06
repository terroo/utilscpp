TARGET=bin2dec
CC=c++
DEBUG=-g
OPT=-O0
WARN=-Wall
CCFLAGS=$(DEBUG) $(OPT) $(WARN) -pipe
OBJS= main.o bin2dec.o
bin2dec: $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)
	rm -f *.o

main.o: src/main.cpp
	$(CC) -c $(CCFLAGS) src/main.cpp -o main.o

bin2dec.o: src/bin2dec.cpp
	$(CC) -c $(CCFLAGS) src/bin2dec.cpp  -o bin2dec.o
