CC=g++

CFLAGS=-c -Wall
ballObjects= football.o methods.o
tempObjects=temperature.o methods.o
all:football temperature

football: $(ballObjects)
	$(CC) $(ballObjects) -o $@

temperature: $(tempObjects)
	$(CC) $(tempObjects) -o $@

%.o: %.c
	$(CC) $(CFLAGS) $<

clean:
	rm -rf *.o football temperature