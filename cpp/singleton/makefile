CC = clang++
CFLAGS = -std=c++11

main : main.o Singleton.o
	$(CC) $(CFLAGS) -o main main.o Singleton.o

main.o : main.cpp Singleton.h
	$(CC) $(CFLAGS) -c main.cpp

Singleton.o : Singleton.cpp Singleton.h
	$(CC) $(CFLAGS) -c Singleton.cpp

clean :
	rm main main.o Singleton.o
