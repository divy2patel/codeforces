#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    string arr[100];
    int l[100];
    char f[100];
    char la[100];
    for(int i=0;i<n;i++)
    {
        getline(cin,arr[i]);
        l[i]=arr[i].length();
        f[i]=arr[i][0];
        la[i]=arr[i][l[i]-1];
    }
    for(int i=0;i<n;i++)
    {
        if(l[i]>10)
        {
            cout<<f[i]<<l[i]-2<<la[i]<<endl;
        }
        else
        {
            cout<<arr[i]<<endl;
        }
    }
}