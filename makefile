CXX = g++-7
CC = g++-7
CXXFLAGS = -Wall -Wextra

all: main

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

main: main.o
	$(CXX) $(CXXFLAGS) -o parrotsay-cpp main.o

clean:
	rm -f *.o *.h.gch *.exe main

run: all
	./main

install:
	cp parrotsay-cpp /usr/local/bin/parrotsay-cpp
	cp parrot.txt /usr/local/bin/parrot.txt

uninstall:
	rm /usr/local/bin/parrotsay-cpp /usr/local/bin/parrot.txt
