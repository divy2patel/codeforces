#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    int freq[256] = {0}; // for all possible char values
    int C = 0;

    for (char c : s) {
        if (freq[(unsigned char)c] == 0) {
            C++;
        }
        freq[(unsigned char)c]++;
    }

    if(C%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<< "IGNORE HIM!";
    }
}