#include <iostream>
#include <string> //for finding length
using namespace std;

int main()
{

    int n;
    cin>> n;
    string s1="I hate ";
    string s2="that I love ";
    string s3="that I hate ";
    string s4="it";

    cout<<s1;

    if(n>1)
    {
        for(int i=1;i<n;i++)
        {
            if(i%2==0)
                cout<<s3;
            else
                cout<<s2;
        }

    }
    cout<<s4;


}
