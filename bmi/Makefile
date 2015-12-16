CC = g++
CFLAGS = -std=c++11
OUT = -o bmicalc.out

bmicalc.out: datum.o bmi.o main.o
	$(CC) $(CFLAGS) *.o $(OUT)

bmi.o: bmi.h bmi.cpp
	$(CC) $(CFLAGS) -c bmi.cpp

main.o: bmi.h main.cpp
	$(CC) $(CFLAGS) -c main.cpp

datum.o: datum.h datum.cpp
	$(CC) $(CFLAGS) -c datum.cpp


.PHONY: clean
clean:
	rm *.o
	

