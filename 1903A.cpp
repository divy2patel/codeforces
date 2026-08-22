#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int c=0;
    int a[t];
    for(int g=0;g<t;g++)
    {
        int n,k;
        cin>>n>>k;
        int c=0;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(k==1)
        {
            bool isSorted = true;
            for(int i = 0; i < n-1; i++)
            {
                if(arr[i] > arr[i+1])
                {
                    isSorted = false;
                    c++;
                    break;
                }
            }
        }
        else if(k>1){
            cout<<"";
        }
        else{
            cout<<"";
            c++;
        }
        a[g]=c;
    }
    for(int i=0;i<t;i++)
    {
        if(a[i]==0)
        {
            cout<<"yes\n";
        }
        else
        {
            cout<<"no\n";
        }
    }
}