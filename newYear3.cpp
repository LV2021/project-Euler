#include <iostream>

int main()
{
	long long number = 600851475143;
	for (long long i = 3; i != number; i += 2)
	{
		while (number % i == 0)
			number /=i;
	}

	std::cout << number << std::endl;
}