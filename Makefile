C=gcc

useComplexe: useComplexe.o complexe.o
        $(CC) -Wall -lm useComplexe.o complexe.o -o useComplexe

useComplexe.o: useComplexe.c complexe.h
        $(CC) -Wall -c useComplexe.c

complexe.o: complexe.c complexe.h
        $(CC) -Wall -c complexe.c

clean:
        rm -f *.o useComplexe
