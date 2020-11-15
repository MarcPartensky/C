all: bonjour

bonjour: bonjour.o main.o
	gcc -o bonjour bonjour.o main.o

main.o: main.c bonjour.h
	gcc -o main.o -c main.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf bonjour
