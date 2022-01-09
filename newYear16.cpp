#include<iostream>

int main() {
    int arr[50];
    int reminder;
    int sum;
    int n = 1000;
    int i;
    int j;
    arr[1] = 2;
    reminder = 0;

    for (i = 2; i < 50; i++) {
        arr[i] = 0;
    }

    for (i = 2; i <= n; i++) {
        reminder = 0;
        for (j = 1; j < 50; j++) {
            arr[j] = arr[j] * 2 + reminder;
            if (arr[j] >= 1000000) {
                arr[j] = arr[j] % 1000000;
                reminder = 1;
            }
            else {
                reminder = 0;
            }
        }
    }

    sum = 0;
    for (i = 1; i < 50; i++) {
        for (j = 1; j <= 6; j++) {
            sum = sum + (arr[i] % 10);
            arr[i] = arr[i] / 10;
        }
    }

    std::cout << "Sum: " << sum;

}