#gcc is the compiler to use
CC = gcc
#Compiler flags 
CFLAGS = -g
#When given no options, create an executable called ass1
TARGET = ass1
LIBOBJS = simplechain.o
OBJS = main.o
ALL: $(TARGET) $(LIB) 
$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS) $(LIB)
$(LIB): $(LIBOBJS)
	$(CC) -shared -Wl,-soname,$@ -o $@ $(LIBOBJS)
.c.o:
$(CC) $(CFLAGS) -c $<
#Remove all generated object files 
.PHONY: clean
clean:
/bin/rm -f *.o *˜ $(LIB) $(TARGET)
