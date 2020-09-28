#include <iostream>
using namespace std;

int main()
{
    long long num = 600851475143;
    long long i;

    for (i = 2; i < num; i++)
    {
        while (num % i == 0)
        {
            num /= i;
        }
    }

    cout << i;
    return 0;
}