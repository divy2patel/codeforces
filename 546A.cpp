#include<iostream>
using namespace std;

int main()
{
    int k,n,w,b,p=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++)
    {
        p=p+k*i;
    }
    b=p-n;
    if(b<0)
    {
        cout<<"0";
    }
    else{
    cout<<b;
    }
}