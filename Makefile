CC=gcc
CFLAGS=-Wall -g

PROGRAMS=ex1 ex3 ex4 ex5 ex6 ex7 ex8 ex9 ex10 ex11 ex12 \
	 ex13

.PHONY += all
all: $(PROGRAMS)

.PHONY += clean
clean:
	rm -f core $(PROGRAMS) *~
	rm -rf *.dSYM
