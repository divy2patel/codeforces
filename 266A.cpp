#include<iostream>
using namespace std;

int main()
{
    int c=0;
    int n;
    string s;
    cin>>n;
    cin.ignore();
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==s[i+1])
        {
            c++;
        }
    }
    cout<<c;
}