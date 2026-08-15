#include<iostream>
using namespace std;

int main()
{
    int n,m;
    int c=0;
    cin>>n>>m;
    while(n<=m)
    {
        n=n*3;
        m=m*2;
        c++;
    }
    cout<<c;
}