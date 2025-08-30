#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    string s;
    cin >> s;

    if (s[1] == 'W')
    {
        if (s[6] == 'W')
        {
            cout << "Si" << endl;
        }
        else
        {
            cout << "Mi" << endl;
        }
        return 0;
    }
    else if (s[5] == 'B')
    {
        cout << "Fa" << endl;
        return 0;
    }
    else if (s[4] == 'B')
    {
        if (s[9] == 'W')
        {
            cout << "Re" << endl;
        }
        else
        {
            cout << "La" << endl;
        }
        return 0;
    }
    else
    {
        if (s[11] == 'W')
        {
            cout << "Do" << endl;
        }
        else
        {
            cout << "So" << endl;
        }
        return 0;
    }
}
