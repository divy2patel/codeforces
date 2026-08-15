#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int u=0;
    int l=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>=65&&s[i]<=90)
        {
            u++;
        }
        else
        {
            l++;
        }
    }
    if(u>l)
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>=97&&s[i]<=122)
            {
                s[i]=s[i]-32;
            }
        }
    }
    else
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>=65&&s[i]<=90)
            {
                s[i]=s[i]+32;
            }
        }
    }
    cout<<s;
}