#include<iostream>
using namespace std;
int main()
{
    long long m, n, a;
    cin >> m >> n >> a;
    long long tiles = ((m + a - 1) / a) * ((n + a - 1) / a);
    cout << tiles;
}