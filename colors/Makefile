TARGET=colors
CC=c++
DEBUG=-g
OPT=-O0
WARN=-Wall
CCFLAGS=$(DEBUG) $(OPT) $(WARN) -pipe
OBJS= main.o colors.o
colors: $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)
	rm -f *.o

main.o: src/main.cpp
	$(CC) -c $(CCFLAGS) src/main.cpp -o main.o

colors.o: src/colors.cpp
	$(CC) -c $(CCFLAGS) src/colors.cpp  -o colors.o
