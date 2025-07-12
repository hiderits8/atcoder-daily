#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<pair<char, ll>> v(n);
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
        cnt += v[i].second;
        if (cnt > 100)
        {
            cout << "Too Long" << endl;
            return 0;
        }
    }

    for (auto &[c, l] : v)
    {
        cout << string(l, c);
    }
    cout << endl;
    return 0;
}