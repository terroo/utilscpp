TARGET=hex2dec
CC=c++
DEBUG=-g
OPT=-O0
WARN=-Wall
CCFLAGS=$(DEBUG) $(OPT) $(WARN)
LD=c++
OBJS= src/main.cpp src/hex2dec.cpp
hex2dec: $(OBJS)
	$(LD) -o $(TARGET) $(OBJS)
	rm -f *.o
main.o: src/main.cpp
	$(CC) -c $(CCFLAGS) src/main.cpp -o main.o
hex2dec.o: src/hex2dec.cpp
	$(CC) -c $(CCFLAGS) src/hex2dec.cpp  -o hex2dec.o
