#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int arr[t];
    for(int g=0;g<t;g++)
    {
        int n;
        int c=0;
        int h=0;
        cin>>n;
        string s;
        cin.ignore();
        getline(cin,s);
        if(n>=3)
        {
            for(int i=0;i<n;i++)
            {
                if(s[i]=='.'&&s[i+1]=='.'&&s[i+2]=='.')
                {
                    c++;
                    i += 2;

                }
                else{
                    if(s[i]=='.')
                        h++;
                }
            }
        }
        else{
            for(int i=0;i<n;i++)
            {
                if(s[i]=='.')
                {
                    h++;
                }

            }
        }
        if(c>=1)
        {
            arr[g]=-1;
        }
        else
        {
            arr[g]=h;
        }
    }
    for(int i=0;i<t;i++)
    {
        if(arr[i]==-1)
        {
            cout<<"2\n";
        }
        else{
            cout<<arr[i]<<"\n";
        }
    }
}