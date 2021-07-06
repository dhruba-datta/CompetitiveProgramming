#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a = 0, b = 0, c = 0, n, k;
    vector<int> v;
    cin >> n >> k;

    a = 240 - k;
    for (int i = 1; i <= n; i++)
    {
        b = b + (5 * i);
        v.push_back(b);
    }
    // display(v);
    // cout<<a<<b;

    if (a >= b)
    {
        cout << n;
    }
    else
    {
        int i=0;
        while (v[i]<=a)
        {
            i++;
        }
        
        cout<<i;
    }

    return 0;
}