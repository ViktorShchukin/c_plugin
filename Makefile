CC=gcc
CFLAGS= -g -Wall -fPIC
OBJS=main.o\
     plugin.o

all: first_plugin.so second_plugin.so main run

run: 
	./main

main: $(OBJS)
	$(CC) $(CFLAGS) -o main $(OBJS)

first_plugin.so: first_plugin.o
	$(CC) -shared $(CFLAGS) -o $@ $<


second_plugin.so: second_plugin.o
	$(CC) -shared $(CFLAGS) -o $@ $<

#main.o: main.c plugin.h

#plugin.o: plugin.c plugin.h
	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm $(OBJS) main first_plugin.so
