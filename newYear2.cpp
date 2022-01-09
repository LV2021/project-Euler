#include <iostream>
const int greatNumber = 4000000;
int fibFunction(int number) {
	int a = 0;
	int b = 1;
	int c = 0;
	int i = 1;

	while (i <= number) {

		c = a + b;
		a = b;
		b = c;

		i++;
	}

	return c;
}
int sumFunction(int number) {
	int sum = 0;
	while (fibFunction(number) <greatNumber)
	{

		if (fibFunction(number) % 2 == 0) {

			sum += fibFunction(number);
		}

		number++;


		
	}
	return sum;
}



int main() {

	int i = 2;

	std::cout << sumFunction(i);

	return 0;
}



