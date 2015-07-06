CC = clang++
CFLAGS = -std=c++11

main : main.o Adaptee.o Adapter.o
	$(CC) $(CFLAGS) -o main main.o Adaptee.o Adapter.o

main.o : main.cpp Target.h Adapter.h Adaptee.h
	$(CC) $(CFLAGS) -c main.cpp

Adapter.o : Adapter.cpp Target.h Adapter.h Adaptee.h
	$(CC) $(CFLAGS) -c Adapter.cpp

Adaptee.o : Adaptee.cpp Target.h Adapter.h Adaptee.h
	$(CC) $(CFLAGS) -c Adaptee.cpp

clean :
	rm main main.o Adaptee.o Adapter.o
