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
        int arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }

        // keep applying the operation (any valid peak) until no peak is left
        bool changed = true;
        while(changed)
        {
            changed = false;
            for(int j=1;j<n-1;j++) // 0-indexed: this is i=2..n-1 in 1-indexed terms
            {
                if(arr[j-1]<arr[j] && arr[j]>arr[j+1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                    changed = true;
                }
            }
        }

        // now just check if it ended up sorted
        bool sorted = true;
        for(int j=0;j<n;j++)
        {
            if(arr[j] != j+1)
            {
                sorted = false;
                break;
            }
        }
        a[i] = sorted ? "YES" : "NO";
    }
    for(int i=0;i<t;i++)
    {
        cout<<a[i]<<"\n";
    }
}