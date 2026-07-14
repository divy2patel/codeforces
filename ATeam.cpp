#include<iostream>
using namespace std;
int main()
{
    int n;
    int c=0;
    int arr[1000][3];
    int rowSum;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
     for(int i=0;i<n;i++)
    {
        int rowSum = arr[i][0] + arr[i][1] + arr[i][2];
        if(rowSum>=2)
        {
            c++;
        }
    }
    cout<<c;
}