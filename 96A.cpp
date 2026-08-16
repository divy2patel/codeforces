#include<iostream>
using namespace std;
int main()
{
    string s;
    int c0=0;
    int c1=0;
    bool dangerous = false;
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
        {
            c1=0;
            c0++;
        }
        else
        {
            c0=0;
            c1++;
        }
        if(c0>=7||c1>=7)
        {
            dangerous = true;
            break;
        }
    }
    cout << (dangerous ? "YES" : "NO");
}