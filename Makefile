CC=gcc
CFLAGS=-Wall -g

.PHONY += all
all: ex1 ex3 ex4 ex5 ex6

.PHONY += clean
clean:
	rm -f core ex1 ex3 ex4 ex5 ex6 *~
