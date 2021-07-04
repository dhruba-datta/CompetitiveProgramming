#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t, A[4], B[4];
    // cout << "enter no: ";
    cin >> t;

    for (int i = 0; i < t; i++)
    {

        for (int i = 0; i < 4; i++)
        {
            // cout << "enter elements: ";
            cin >> A[i];

            for (int i = 0; i < 4; i++)
            {
                B[i] = A[i];
            }

            sort(B, B + 4);
        }

        if (
            ((B[2] == A[2]) && (B[3] == A[3])) || ((B[2] == A[3]) && (B[3] == A[2])) || ((B[2] == A[0]) && (B[3] == A[1])) || ((B[2] == A[1]) && (B[3] == A[0])))
        {
            cout << "NO" << endl;
        }

        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}