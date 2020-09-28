#include <iostream>
using namespace std;

int main()
{
    long sum = 0;
    long first = 1;
    long second = 2;
    long temp;
    while (first < 4000000)
    {
        if (first % 2 == 0)
            sum += first;
        temp = second;
        second = first + second;
        first = temp;
    }
    cout << sum;
    return 0;
}