#variables for compiler and flags
CC=gcc
CFLAGS = -Wextra -Wall -pedantic

#target all (on by default) depends on the target 10001st_prime
all: 10001st_prime

10001st_prime: 10001st_prime.o is_prime.o
	$(CC) $(CFLAGS) 10001st_prime.o is_prime.o -o 10001st_prime

10001st_prime.o: 10001st_prime.c
	$(CC) $(CFLAGS) -c 10001st_prime.c

is_prime.o: is_prime.c
	$(CC) ${CFLAGS} -c is_prime.c

#clean depends on nothing
clean: 
	rm -rf *o 10001st_prime
