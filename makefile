CC=g++

CFLAGS=-c -Wall
OBJECTS= football.o methods.o
all:football

football: $(OBJECTS)
	$(CC) $(OBJECTS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) $<

clean:
	rm -rf *.o football