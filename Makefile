CC=gcc
CFLAGS= -g -Wall
OBJS=main.o\
     plugin.o

all: main run

run: 
	./main

main: $(OBJS)
	$(CC) $(CFLAGS) -o main $(OBJS)

#main.o: main.c plugin.h

#plugin.o: plugin.c plugin.h
	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm $(OBJS) main
