all: Test GCD.o

GCD.o: GCD.cpp
	g++ -Wall -c GCD.cpp

Test: GCD.cpp GCDTest.cpp
	g++ -Wall -o Test GCDTest.cpp -lcppunit

clean:
	rm Test *.o *~ *.gch
