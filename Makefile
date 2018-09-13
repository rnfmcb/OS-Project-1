#gcc is the compiler to use
CC = gcc
#Compiler flags 
CFLAGS = -g
#When given no options, create an executable called ass1
all: ass1
ass1: simplechain.o 
	gcc simplechain.o -o ass1
simplechain.o: simplechain.c 
	gcc -c  simplechain.c
 
#TARGET = ass1
#OBJS = main.o  simplechain.o
#$(TARGET): $(OBJS)
#	$(CC) -o $@ $(TARGET) $(OBJS)
main.o: main.c
	$(CC) $(CFLAGS) -c main.c
#simplechain.o: simplechain.c
#	$(CC) $(CFLAGS) -c simplechain.c
.c.o:
	$(CC) $(CFLAGS) -c $<
#Remove all generated object files 
.PHONY: clean
clean:
#	/bin/rm -f *.o *˜ $(LIB) $(TARGET)
	rm -rf *o ass1
