#include<iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s1;
    string s2;
    getline(cin,s1);
    getline(cin,s2);
    reverse(s1.begin(), s1.end());
    if(s1==s2)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}