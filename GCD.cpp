#ifndef GCD_CPP
#define GCD_CPP

namespace GCD
{
	template <class T> T GCD( T A, T B )
	{//Finds the Greatest Common Divisor of A and B. Assumes T is a numeric type that implements mod as operator % as well as != and = operators.
		T remainder = 0;
		while( B != 0 )
		{
			remainder = A % B;
			A = B;
			B = remainder;
		}

		return A;
	}
}

#endif /* GCD_CPP */
