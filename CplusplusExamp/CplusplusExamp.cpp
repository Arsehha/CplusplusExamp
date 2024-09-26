#include "Hello.h"
#include <iostream>
#include <cstdint>

int main()
{
	setlocale(LC_ALL, "rus");
	uint8_t n;
	std::cout << "Введите n: ";
	std::cin >> n;
	fizzbuzz(n);
}