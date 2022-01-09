#include<iostream>

int main() {
    int i = 1; 
    int sum = 1; 
    int res = 0;
    int n, m, d, p;
    
    while (res < 500) {
        i++;
        sum += i;
        n = sum;
        d = 1;
        res = 1;
        while (n > 1) {
            d++;
            if (n % d == 0) {
                p = 1;
                while (n % d == 0) {
                    n = n / d;
                    p++;
                }
                res *= p;
            }
        }
    }
    std::cout << sum;
}