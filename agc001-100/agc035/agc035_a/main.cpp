#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main()
{
    int n;
    cin >> n;
    map<int, int> a;
    rep(i, n)
    {
        int b;
        cin >> b;
        a[b]++;
    }

    bool ok = false;

    if (a.size() == 1 && a.find(0) != a.end())
        ok = true;
    if (!ok && n % 3 == 0)
    {
        if (a.size() == 2)
        {
            if (a.find(0) != a.end() && a[0] == n / 3)
                ok = true;
        }
        else if (a.size() == 3)
        {
            int s = 0;
            bool ok2 = true;
            for (auto [key, cnt] : a)
            {
                if (cnt != n / 3)
                {
                    ok2 = false;
                    break;
                }
                s ^= key;
            }
            if (ok2 && s == 0)
                ok = true;
        }
    }

    cout << (ok ? "Yes" : "No") << endl;

    return 0;
}