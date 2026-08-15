#include<iostream>
using namespace std;
 int main()
 {
    string s;
    string t;
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y'&&s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U'&&s[i]!='Y')
        {
            t=t+'.';
            t=t+s[i];
        }
    }
    for(int i=0;i<t.size();i++)
    {
        if(t[i]>=65&&t[i]<=90)
        {
            t[i]=t[i]+32;
        }
    }
    cout<<t;
 }