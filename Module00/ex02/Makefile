CC=g++
FLAGS=-std=gnu++17 -Wall -Wextra -Werror

all:
	$(CC) $(FLAGS) ex3.cc -o convert

clean:
	rm convert

tests:
	./convert up "I’m the one!"; ./convert down "I’m A SMall man"

.PHONY:
	clean