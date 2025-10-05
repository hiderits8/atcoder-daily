#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n, q;
    string s;
    cin >> n >> s >> q;

    vector<pair<int, char>> status(n);
    rep(i, n)
    {
        status[i] = {0, s[i]};
    }

    optional<pair<int, int>> fill = nullopt;

    rep(i, q)
    {
        int t, x;
        char c;
        cin >> t >> x >> c;
        if (t == 1)
        {
            status[x - 1] = {i, c};
        }
        else
        {
            fill = {i, t};
        }
    }

    for (auto &[time, c] : status)
    {
        if (!fill || time >= fill->first)
        {
            cout << c;
        }
        else if (fill->second == 2)
        {
            cout << (char)(tolower(c));
        }
        else
        {
            cout << (char)(toupper(c));
        }
    }
    cout << endl;
    return 0;
}
