# Makefile

# target program

# default rule
a.out : main.o rslib.o
	   gcc main.o rslib.o

# compile source files into object files
main.o: main.c rslib.h
	gcc -c main.c

rslib.o: rslib.c rslib.h
	   gcc -c rslib.c

# clean up build files
clean:
	rm -f *.o a.out
