#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        {
            c++;
        }
    }
    if(c==0)
    {
        cout<<"EASY";
    }
    else
    {
        cout<<"hard";
    }
}