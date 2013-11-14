#include <iostream>
#include <stdlib.h>
#include "GCD.cpp"

int main( int argc, char* argv[] )
{
	if( argc != 3 )
	{//Check if there are three arguments, indicating the two numbers as arguments.
		std::cerr << "Invalid number of arguments, the app should be called like \"" << argv[0] << " A B\" where A and B are numbers." << std::endl;
		return 1;
	}
	else
	{
		std::cout << "The Greates Common Divisor is " << GCD::GCD( atol(argv[1]), atol(argv[2]) ) << "." << std::endl;
	}
}
