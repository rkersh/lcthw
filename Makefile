CC=gcc
CFLAGS=-Wall -g

.PHONY += all
all: ex1 ex3 ex4 ex5 ex6 ex7 ex8 ex9 ex10 ex11

.PHONY += clean
clean:
	rm -f core ex1 ex3 ex4 ex5 ex6 ex7 ex8 ex9 ex10 ex11 *~
	rm -rf *.dSYM
