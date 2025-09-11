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

    for (auto c : s)
    {
        ans += c;
        if (ans.length() >= 3 && ans.substr(ans.length() - 3) == "ABC")
            ans.erase(ans.end() - 3, ans.end());
    }

    cout << ans << endl;

    return 0;
}
