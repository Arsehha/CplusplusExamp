#include "Hello.h"
#include <iostream>
#include <cstdint>

void fizzbuzz(uint8_t n )
{
	for (uint8_t i = 1; i <= n; i++)
	{
		if ((i % 3 == 0) && !(i % 5 == 0))
		{
			std::cout << "Fizz" << std::endl;
		}
		if (!(i % 3 == 0) && (i % 5 == 0))
		{
			std::cout << "Buzz" << std::endl;
		}
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			std::cout << "Fizzbuzz" << std::endl;
		}
		else
		{
			std::cout << i << std::endl;
		}
	}
}