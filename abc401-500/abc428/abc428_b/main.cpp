#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n, k;
    string s;
    cin >> n >> k >> s;

    map<string, int> cnt;

    int max_len = 0;

    for (int i = 0; i <= n - k; ++i)
    {
        string sb = s.substr(i, k);
        if (cnt.contains(sb))
            continue;
        auto pos = s.find(sb);
        int c = 1;
        while (pos != string::npos)
        {
            pos++;
            if (pos > n - k)
                break;
            pos = s.find(sb, pos);
            if (pos != string::npos)
                c++;
        }

        max_len = max(max_len, c);

        cnt[sb] = c;
    }

    cout << max_len << endl;

    bool f = true;
    for (auto [str, c] : cnt)
    {
        if (c == max_len)
        {
            if (!f)
                cout << " ";
            f = false;
            cout << str;
        }
    }
    cout << endl;

    return 0;
}