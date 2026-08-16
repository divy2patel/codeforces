#include<iostream>
using namespace std;
int main()
{
    int c1=0;
    int c2=0;
    int n;
    string s;
    cin>>n;
    cin.ignore();
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='A')
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    if(c1>c2)
    {
        cout<<"Anton";
    }
    else if(c1==c2)
    {
        cout<<"Friendship";
    }
    else
    {
        cout<<"Danik";
    }
}