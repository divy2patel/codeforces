#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int d1=0,d2=0,d3=0,d4=0;
    int y=1000;
    while(true)
    {
        if(n>=y)
        {
            y++;
            continue;
        }
        else if(n<y)
        {
            d4=y%10;
            y=y/10;
            d3=y%10;
            y=y/10;
            d2=y%10;
            y=y/10;
            d1=y%10;
            if(d1!=d2&&d1!=d3&&d1!=d4&&d2!=d3&&d2!=d4&&d3!=d4)
            {
                y=d1*1000+d2*100+d3*10+d4;
                cout<<y;
                break;
            }
            else
            {
                y=d1*1000+d2*100+d3*10+d4;
                y++;
            }
        }
    }
}