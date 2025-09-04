#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    string s;
    cin >> s;

    string ans;
    int cnt = 1;
    bool start = true;
    char prev = s[0];
    ans += s[0];
    for (auto ch : s)
    {
        if (!start)
        {
            if (ch == prev)
            {
                cnt++;
            }
            else
            {
                ans += to_string(cnt) + ch;
                cnt = 1;
            }
        }
        prev = ch;
        start = false;
    }
    ans += to_string(cnt);

    cout << ans << endl;
    return 0;
}
