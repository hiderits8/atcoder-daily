#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    string s;
    cin >> s;

    int n = s.size();
    bool prev = false;
    rep(i, n)
    {
        if (prev && s[i] == 'h')
        {
            prev = false;
            continue;
        }
        if (prev == false && (s[i] == 'o' || s[i] == 'k' || s[i] == 'u'))
            continue;
        if (prev == false && s[i] == 'c')
        {
            prev = true;
            continue;
        }
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    return 0;
}
