#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[t];
    for(int j=0;j<t;j++)
    {
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];

        int g = arr[0];   // gap from start (0) to first plant/point
        for(int i=0;i<n;i++)
        {
            if(i!=n-1)
            {
                if(g<arr[i+1]-arr[i])
                    g=arr[i+1]-arr[i];
            }
            else
            {
                if(g<2*(x-arr[i]))
                    g=2*(x-arr[i]);
            }
        }
        a[j]=g;
    }
    for(int i=0;i<t;i++)
        cout<<a[i]<<"\n";
}