#include <iostream>
using namespace std;

int main()
{
    int largest = 0;
    int num = 0;
    int n = 0;
    int rev = 0;
    int digit = 0;
    for (int i = 100; i < 1000; i++)
    {
        for (int j = i; j < 1000; j++)
        {
            num = i * j;
            n = num;
            rev = 0;
            do
            {
                digit = num % 10;
                rev = (rev * 10) + digit;
                num = num / 10;
            } while (num != 0);

            if (n == rev && n > largest)
            {
                largest = n;
            }
        }
    }

    cout << largest;
    return 0;
}