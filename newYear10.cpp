#include <iostream>



bool Prime(int number) {
    for (int i = 2;i<= number / 2; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int total = 2000000;
    long long result = 0;
    for (int i = 2; i < total; i++) {
        if (Prime(i)) {
           result += i;
        }
    }
    
    return 0;
}

