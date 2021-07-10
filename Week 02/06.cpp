#include <bits/stdc++.h>
using namespace std;

int main()
{
    // solve 01
    /*
    int s1, s2, s3, s4, count = 0;
    cin >> s1 >> s2 >> s3 >> s4;
    if (s1 == s2 || s1 == s3 || s1 == s4)
    {
        count++;
    }
    if (s2 == s3 || s2 == s4)
    {
        count++;
    }
    if (s3 == s4)
    {
        count++;
    }

    cout << count;
    */

    // solve 02
    int a[4], count = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 4);
    for (int i = 0; i < 3; i++)
    {
        if (a[i] == a[i + 1])
        {
            count++;
        }
    }
    cout << count;

    return 0;
}