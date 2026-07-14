#include<iostream>
using namespace std;
int main()
{
    int n;
    int x=0;
    cin>>n;
    cin.ignore();
    string c;
    for(int i=0;i<n;i++)
    {
        getline(cin,c);

        if(c=="X++")
        {
            x++;
        }
        else if(c=="++X")
        {
            ++x;
        }
        else if(c=="--X")
        {
            --x;
        }
        else if(c=="X--")
        {
            x--;
        }
    }
    cout<<x;
}