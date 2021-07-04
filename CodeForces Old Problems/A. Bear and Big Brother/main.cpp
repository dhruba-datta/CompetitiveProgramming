#include <iostream>
#include <string> //for finding length
using namespace std;

int main()
{

    int a,b,count=0;
    cin>> a;
    cin>> b;

    while(a<=b)
    {
        a=a*3;
        b=b*2;
        count++;
    }

    cout<<count;

}
