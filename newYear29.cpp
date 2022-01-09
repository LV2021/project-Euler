#include <iostream>
#include <cmath>

int main() {
    int a, b, c, d = 0, e, f;
    double one, two;
    bool ans;
    c = 100;

    for (a = 2; a <= c; a++) {
        for (b = 2; b <= c; b++) {
           one= pow(a, b);
            ans = 1;
            for (e = (a + 1); e <= c; e++) {
                for (f = 2; f < b; f++) {
                    two = pow(e, f);
                    if (one == two) {
                        ans = 0;
                    }
                }
            }
            if (ans == 1) {
                d++;
            }
        }
    }

   std::cout << d;
}