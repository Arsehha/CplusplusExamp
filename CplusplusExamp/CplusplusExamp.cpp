#include "Hello.h"
#include <iostream>
#include <cstdint>

int main()
{
	setlocale(LC_ALL, "rus");
	int64_t num;
	num = compute_fib();
	std::cout <<std::endl <<"Число фибаначи " << num;
}