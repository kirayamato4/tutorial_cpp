#include "wolf_vector_sample.h"
#include <iostream>
#include <array>
#include <vector>

void vector_sample::Sample()
{
	std::vector< int > v1;
	for( int i = 0; i < 5; ++i )
		v1.push_back( i + 1 );

	std::vector< int > v2 = v1;

	std::vector< int > v3;

	const int* p = v1.data();
	
	std::copy( v1.begin(), v1.end(), std::ostream_iterator<int>( std::cout, " " ) );
	std::cout << std::endl;


	for( int& value : v1 )
		std::cout << value << " ";
	std::cout << std::endl;

	for( auto& value : v1 )
		std::cout << value << " ";
	std::cout << std::endl;

	for( auto iter = v1.begin(); iter != v1.end(); ++iter )
		std::cout << *iter << " ";
	std::cout << std::endl;

	if( v1 == v2 )
		std::cout << "same vector" << std::endl;
	else
		std::cout << "different vector" << std::endl;

	std::cout << "size() " << v1.size() << std::endl;
	std::cout << "max_size() " << v1.max_size() << std::endl;
	std::cout << "empty() " << v1.empty() << std::endl;
	std::cout << "capacity() " << v1.capacity() << std::endl;


}
