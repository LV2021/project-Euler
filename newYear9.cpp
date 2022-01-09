// ConsoleApplication9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int tmp = 1;
    int tmp1 = 999;
    while (tmp < tmp1)
    {
        int tmp2 = 1000 - tmp - tmp1;
        if ((tmp * tmp) + (tmp1 * tmp1) == tmp2 * tmp2)
        {
            std::cout << tmp * tmp1 * tmp2 << std::endl;
            return 0;
        }
        else if ((tmp * tmp) + (tmp1* tmp1) > tmp2 * tmp2)
        {
            tmp1--;
        }
        else
        {
            tmp++;
        }
    }
    return 0;
}