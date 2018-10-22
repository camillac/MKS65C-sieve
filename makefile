compile: driver.o sieve.o
	gcc driver.o sieve.o -lm

run:
	./a.out 10 1

sieve.o: sieve.c sieve.h
	gcc -c sieve.c -lm

driver.o: driver.c
	gcc -c driver.c -lm

clean:
	-rm -rf *.o a.out
