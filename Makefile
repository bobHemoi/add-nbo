all		: add-nbo

add-nbo		: hexReader.o main.o
			g++ -o add-nbo hexReader.o main.o

hexReader.o : hexReader.cpp hexReader.h
			g++ -c -o hexReader.o hexReader.cpp

main.o 		: main.cpp hexReader.h
			g++ -c -o main.o main.cpp

clean 		:
			rm -f add-nbo *.o