#include<iostream>
using namespace std;
int main()
{
    int n;
    int h;
    int w=0;
    cin>>n>>h;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=h)
        {
            w=w+1;
        }
        else
        {
            w=w+2;
        }
    }
    cout<<w;
}