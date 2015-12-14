CC = g++
CFLAGS = -std=c++11
OUT = -o bmicalc.out

bmicalc.out: bmi.o main.o
	$(CC) $(CFLAGS) *.o $(OUT)
	./bmicalc.out

bmi.o: bmi.h bmi.cpp
	$(CC) $(CFLAGS) -c bmi.cpp
	
main.o: bmi.h main.cpp
	$(CC) $(CFLAGS) -c main.cpp

clean:
	rm *.o
	

