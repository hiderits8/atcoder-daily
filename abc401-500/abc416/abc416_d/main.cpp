#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ull n, m;
        cin >> n >> m;
        vector<ull> a(n), b(n);
        for (ull i = 0; i < n; ++i)
        {
            cin >> a[i];
            a[i] %= m;
        }
        for (ull i = 0; i < n; ++i)
        {
            cin >> b[i];
            b[i] %= m;
        }

        multiset<ull> s(a.begin(), a.end());
        ull ans = 0;
        for (auto &x : b)
        {
            ull need = (m - x) % m;
            auto itr = s.lower_bound(need);
            if (itr == s.end())
                itr = s.begin();
            ull cur = *itr;
            ans += (x + cur) % m;
            s.erase(itr);
        }
        cout << ans << endl;
    }
    return 0;
}