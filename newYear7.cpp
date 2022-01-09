#include<iostream>


bool isPrime(int num)
{
    for (int i = 2; i < num; i++)
        if (num % i == 0)

        {
            return false;
        }
    return true;
}

int main()
{
    int count = 0;

    for (int i = 2; ; i++) {
        if (isPrime(i)) {
            count++;
            if (count == 10001) {
                std::cout << i << std::endl;
                break;
            }
        }
    }
    return 0;
}