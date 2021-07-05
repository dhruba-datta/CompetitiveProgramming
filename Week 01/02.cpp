#include <iostream>
using namespace std;

int main()
{
    int x, y, count = 0;
    cin >> x;
    y = x;

    while (x >= 5)
    {
        x = x - 5;
        count++;
    }
    if (x > 0)
    {
        count++;
    }

    cout << count;
    return 0;
}