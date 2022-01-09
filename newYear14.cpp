#include <iostream>
using namespace std;

int main() {
    long number, i, max = 1, result, answer = 1;
    for (i = 2; i <= 1000000; i++) {
        result = 1;
        number= i;
        while (number > 1) {
            result++;
            if (number % 2 == 0) { number= number/ 2; }
            else { number= number * 3 + 1; }
        }
        if (result > max) { max = result; answer = i; }
    }
    
}