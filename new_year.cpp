#include<iostream>
#include<string>
#include <algorithm>




int main() {
	int total = 10;
	int number0 = 3;
	int number1 = 5;
	int sum = 0;
	for (int i = 0; i <= total; ++i) {
		if (i % number0 == 0 ||i %5==0) {
		
			sum += i;
		}
	}
	std::cout << sum;
}