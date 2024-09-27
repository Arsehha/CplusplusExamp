#include "Hello.h"
#include <iostream>
#include <cstdint>
#include <fstream>

int64_t compute_fib()
{
	std::fstream file;
	file.open("a.txt");

	int n;
	if (!file)
	{
		std::cout << "Файл не открыт";
	}
	else
	{
		std::cout << "Файл открыт";
		file >> n;
	}
	file.close();

	int64_t numOne = 0, numTwo = 1, result;

	for (int i = 0; i < n; i++)
	{
		result = numOne + numTwo;
		if (numOne > numTwo)
		{
			numTwo = result;
		}
		else
		{
			numOne = result;
		}
	}
	return result;
}