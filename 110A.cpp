#include<iostream>
using namespace std;
int main()
{
    int c=0;
    long long n;      // fixed: was int, overflows for n up to 1e18
    cin>>n;
    while(n>0)
    {
        if(n%10==4||n%10==7)
        {
            n=n/10;
            c++;
        }
        else
        {
            n=n/10;
        }
    }

    // now check EVERY digit of c, not just the last one
    bool lucky = (c != 0);
    int temp = c;
    while(temp > 0)
    {
        if(temp%10 != 4 && temp%10 != 7)
        {
            lucky = false;
            break;
        }
        temp = temp/10;
    }

    if(lucky)
        cout<<"YES";
    else
        cout<<"NO";
}