main: a.o main.o
	g++ -o hw2 a.o main.o

a.o: a.cpp a.h
	g++ -c a.cpp
A.o: main.cpp a.h
	g++ -c main.cpp

clean:
	rm a *.o
