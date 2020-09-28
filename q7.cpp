#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num)
{
    int squareRoot = sqrt(num);
    if (num == 2)
    {
        return true;
    }
    for (int i = 2; i <= squareRoot; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num = 1;
    int counter = 0;

    for (; counter != 10001;)
    {
        num++;
        if (isPrime(num))
        {
            counter++;
        }
    }

    cout << num;

    return 0;
}