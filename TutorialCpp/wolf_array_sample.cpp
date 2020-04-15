#include "wolf_array_sample.h"
#include <iostream>
#include <array>


void array_sample::Sample()
{
	std::array< int, 3 > a1{ 1, 2, 3 };
	std::array< int, 3 > a2{ 1, 2, 3 };
	std::array< int, 3 > a3{ 4, 5, 6 };

	if (a1 == a2)
	{
		std::cout << "same array" << std::endl;
	}
	else
	{
		std::cout << "different array" << std::endl;
	}

	if (a1 == a3)
	{
		std::cout << "same array" << std::endl;
	}
	else
	{
		std::cout << "different array" << std::endl;
	}

	for (const auto& value : a1)
		std::cout << value << " ";
	std::cout << "\n";

	std::reverse_copy(a2.begin(), a2.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << "\n";
}
