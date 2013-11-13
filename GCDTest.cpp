#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/TestCaller.h>
#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>
#include "GCD.cpp"

class GCDTest : public CppUnit::TestCase 
{
	private:
		
	public:
		
		void testGCDBasic()
		{//Basic test of the Counting Sort. Just makes sure it will sort a vector of 1 through 6.
			CPPUNIT_ASSERT( GCD::GCD( 4851, 3003 ) == 231 );
		}
		
		//Create the test suite using CPPUnit macros.
		CPPUNIT_TEST_SUITE( GCDTest );
		CPPUNIT_TEST( testGCDBasic );
		//CPPUNIT_TEST_EXCEPTION( testPossibleOutOfRangeLower, std::out_of_range );
		//CPPUNIT_TEST_EXCEPTION( testPossibleOutOfRangeUpper, std::out_of_range );
		CPPUNIT_TEST_SUITE_END( );
};

int main( )
{
	CPPUNIT_TEST_SUITE_REGISTRATION( GCDTest );
	CppUnit::TextUi::TestRunner runner;
	CppUnit::TestFactoryRegistry &registry = CppUnit::TestFactoryRegistry::getRegistry( );
	runner.addTest( registry.makeTest( ) );
	if ( runner.run( ) )
	{//Runner had success.
		return 0;
	}
	else
	{//Runner failed.
		return 1;
	}
}
