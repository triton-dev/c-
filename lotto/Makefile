CC = g++
CFLAGS = -std=c++11
OUT = -o lotto
FLAGS = -ggdb -Wall

lotto: lotto.o
	$(CC) $(CFLAGS) *.o $(OUT)

lotto.o: lotto.h lotto.cpp
	$(CC) $(CFLAGS)  -c lotto.cpp


.PHONY: clean
clean:
	-rm *.o 
	-rm *.out 
	-rm lotto
	
