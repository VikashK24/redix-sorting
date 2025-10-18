# Makefile

# target program

# default rule
a.out : mainRS.o
	   gcc mainRS.o 

# compile source files into object files
mainRS.o: mainRS.c
	gcc -c mainRS.c

#listlib.o: listlib.c listlib.h
#	   gcc -c listlib.c

# clean up build files
clean:
	rm -f *.o a.out
