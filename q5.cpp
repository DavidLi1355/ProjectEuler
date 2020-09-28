#include <iostream>
using namespace std;

int main()
{
    int div = 20;
    int counter = 1;

    while (div > 0)
    {
        int tempDiv = div;
        while (tempDiv > 0 && counter % tempDiv == 0)
        {
            tempDiv--;
        }

        if (tempDiv > 0)
        {
            counter++;
        }
        else
        {
            break;
        }
    }

    cout << counter;

    return 0;
}