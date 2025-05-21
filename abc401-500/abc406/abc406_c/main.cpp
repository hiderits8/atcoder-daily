#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<pair<char, ll>> s;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] < a[i + 1])
        {
            if (s.empty() || s.back().first == '>')
            {
                s.push_back({'<', 1});
            }
            else
            {
                s.back().second++;
            }
        }
        else
        {
            if (s.empty() || s.back().first == '<')
            {
                s.push_back({'>', 1});
            }
            else
            {
                s.back().second++;
            }
        }
    }

    ll ans = 0;
    for (int i = 1; i < s.size() - 1; i++)
    {
        if (s[i].first == '>')
        {
            ans += s[i - 1].second * s[i + 1].second;
        }
    }
    cout << ans << endl;

    return 0;
}