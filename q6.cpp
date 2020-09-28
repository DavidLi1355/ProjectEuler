#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long squareSum = 0;
    long long sum = 0;
    for (int i = 0; i <= 100; i++)
    {
        sum += i;
        squareSum += (i * i);
    }
    long long sumSquare = sum * sum;

    cout << abs(squareSum - sumSquare);

    return 0;
}