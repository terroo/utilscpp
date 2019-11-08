TARGET=help
CC=g++
DEBUG=-g
OPT=-O0
WARN=-Wall
PTHREAD=-pthread
CCFLAGS=$(DEBUG) $(OPT) $(WARN) $(PTHREAD) -pipe
LD=g++
LDFLAGS=$(PTHREAD) -export-dynamic
OBJS= main.o
install: $(OBJS)
	$(LD) -o $(TARGET) $(OBJS) $(LDFLAGS)

main.o: main.cpp
	$(CC) -c $(CCFLAGS) main.cpp -o main.o
clean:
	rm -f *.o
