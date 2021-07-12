#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, p, x = 0, y = 0;
    cin >> n;
    long long a[n];
    for (long long i = 1; i <= n; i++)
    {
        cin >> p;
        a[p] = i;
    }

    cin >> m;
    while (m--)
    {
        long long q;
        cin >> q;

        x += a[q];
        y += n - a[q] + 1;
    }

    cout << x << " " << y << endl;
    return 0;
}