#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string a[t];
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        if(n%3==0)
        {
            a[i]="Second";
        }
        else
        {
            a[i]="First";
        }
    }
    for(int i=0;i<t;i++)
    {
        cout<<a[i]<<"\n";
    }
}