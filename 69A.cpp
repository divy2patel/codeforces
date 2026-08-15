#include<iostream>
using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    int arr[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    int sum[3]={0,0,0};
    for(int j=0;j<3;j++)
    {
        for(int i=0;i<n;i++)
        {
            sum[j]=sum[j]+arr[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        if(sum[i]!=0)
        {
            c++;
        }
    }
    if(c==0)
    {
    cout<<"YES";
    }
    else
    {
    cout<<"NO";
    }
}