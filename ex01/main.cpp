#include <iostream>
#include "iter.hpp" 

int main( void )
{
	int	ar[3] = { 0, 1, 2 };
	std::string	sar[] = { "zero", "one", "two", "three" };

	::iter( ar, 3, &show );
	::iter( sar, 4, &show );
	return 0;
}
