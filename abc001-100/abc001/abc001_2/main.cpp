#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int m;
    cin >> m;
    int vv = 0;
    if (m < 100)
    {
        cout << "00" << endl;
    }
    else if (m <= 5000)
    {
        vv = m / 100;
        if (vv < 10)
            cout << 0;
        cout << vv << endl;
    }
    else if (m <= 30000)
    {
        vv = m / 1000 + 50;
        cout << vv << endl;
    }
    else if (m <= 70000)
    {
        vv = ((m / 1000) - 30) / 5 + 80;
        cout << vv << endl;
    }
    else
    {
        cout << 89 << endl;
    }
    return 0;
}
