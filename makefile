CLFAGS = -g3 -Wall
CC = gcc
all : hamming_weight
hamming_weight : Hamming_weight.c
	$(CC) $(CLFAGS) Hamming_weight.c -o Hamming_weight
clean:
	rm hamming_weight
