all: Test GCD.o GCD

GCD.o: GCD.cpp
	g++ -Wall -c GCD.cpp

GCD: GCD.cpp GCDApp.cpp
	g++ -Wall -o GCD GCDApp.cpp

Test: GCD.cpp GCDTest.cpp
	g++ -Wall -o Test GCDTest.cpp -lcppunit

clean:
	rm Test GCD *.o *~ *.gch
