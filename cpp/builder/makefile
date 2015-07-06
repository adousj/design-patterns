CC = clang++
CFLAGS = -std=c++11

main : main.o Product.o ConcreteBuilder.o Director.o
	$(CC) $(CFLAGS) -o main main.o Product.o ConcreteBuilder.o Director.o

main.o : main.cpp Builder.h ConcreteBuilder.h Director.h Product.h
	$(CC) $(CFLAGS) -c main.cpp

Product.o : Product.cpp Product.h
	$(CC) $(CFLAGS) -c Product.cpp

ConcreteBuilder.o : ConcreteBuilder.cpp ConcreteBuilder.h Product.h
	$(CC) $(CFLAGS) -c ConcreteBuilder.cpp

Director.o : Director.cpp Director.h Product.h Builder.h
	$(CC) $(CFLAGS) -c Director.cpp

clean :
	rm main main.o Product.o ConcreteBuilder.o Director.o
