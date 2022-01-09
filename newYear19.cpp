#include<iostream>


int main(){

    int count = 0;
    int amsvaOrer=0 ;
    int ancacOrer= 1;

    for (int i = 1901; i <2000; i++) {
        for (int j = 1; j <= 12; j++) {
            if (j == 4 || j == 6 || j == 9 || j == 11) {
                amsvaOrer = 30;
            }
            else if (j == 2) {
                if (i % 400 == 0 || (i % 4 == 0 && i % 100 != amsvaOrer)) {
                    amsvaOrer = 29;
                }
                else {
                    amsvaOrer = 28;
                }
            }
            else {
                amsvaOrer = 31;
            }
            if (ancacOrer % 7 == 0) {
                count++;
            }
            ancacOrer += amsvaOrer;
        }
    }

    std::cout << count << std::endl;

}
