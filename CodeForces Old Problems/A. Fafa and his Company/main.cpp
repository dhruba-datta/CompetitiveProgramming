#include <iostream>
#include <string> //for finding length
using namespace std;

int main()
{

    int n;
    cin>>n;
    int count=0,res=0;

    for(int i=1;i<n;i++)
    {
        int x= n-i;
        res= x%i;

        if(res==0)
            count++;
    }

    cout<<count;

}
