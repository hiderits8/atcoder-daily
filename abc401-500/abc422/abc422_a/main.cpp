#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    if (s[0] <= '7')
    {
        if (s[2] <= '7')
        {
            cout << s[0] << "-" << char(s[2] + 1) << endl;
        }
        else
        {
            cout << char(s[0] + 1) << "-1" << endl;
        }
    }
    else
    {
        cout << "8-" << char(s[2] + 1) << endl;
    }

    return 0;
}