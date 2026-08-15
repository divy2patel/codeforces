#include<iostream>
using namespace std;

int main()
{
    int x;
    int c=0;
    cin>>x;
    cin.ignore();
    while(x!=0)
    {
        if(x>=5)
        {
            x=x-5;
            c++;
        }
        else if(x>=4)
        {
            x=x-4;
            c++;
        }
        else if(x>=3)
        {
            x=x-3;
            c++;
        }
        else if(x>=2)
        {
            x=x-2;
            c++;
        }
        else if(x>=1)
        {
            x=x-1;
            c++;
        }
    }
    cout<<c;
}