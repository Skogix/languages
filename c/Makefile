fizzbuzz.o:	fizzbuzz.c
		gcc -c fizzbuzz.c

pi.o:	pi.c
		gcc -c pi.c

main.o:	main.c
		gcc -c main.c

main:	main.o pi.o 
		gcc -lm -o main main.o pi.o fizzbuzz.o
