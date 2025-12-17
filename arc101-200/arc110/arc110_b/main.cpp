#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const ll R = 1e10;

int main(void)
{
    int n;
    string t;
    cin >> n >> t;

    if (t == "0" || t == "11" || t == "10")
    {
        cout << R << endl;
        return 0;
    }
    else if (t == "1")
    {
        cout << R * 2 << endl;
        return 0;
    }

    string ts = t.substr(0, 2), te = t.substr(t.size() - 2);
    if (ts == "10")
    {
        t = '1' + t;
    }
    else if (ts == "01")
    {
        t = "11" + t;
    }
    if (te == "11")
    {
        t = t + '0';
    }
    else if (te == "01")
    {
        t = t + "10";
    }

    int r = t.size() / 3;
    string s;
    rep(i, r) s += "110";

    if (s.find(t) == string::npos)
    {
        cout << 0 << endl;
        return 0;
    }

    cout << R - r + 1 << endl;
    return 0;
}
