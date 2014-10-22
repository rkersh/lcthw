CC=gcc
CFLAGS=-Wall -g

.PHONY += all
all: ex1 ex3 ex4 ex5

.PHONY += clean
clean:
	rm -f ex1 ex3 ex4 ex5 *~
