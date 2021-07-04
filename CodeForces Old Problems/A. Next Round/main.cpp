#include <iostream>
#include <string> //for finding length
using namespace std;

int main()
{

    int n,k,count=0;
    int a[100]={};

    cin>>n;
    cin>>k;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    int x=a[k-1];



        for(int i=n;i>=0;i--)
        {
        if(a[i]>=x && a[i]>0)
            count++;
        }



    cout<<count;



}
