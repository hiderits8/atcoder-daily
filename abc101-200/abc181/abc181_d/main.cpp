#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    string s;
    cin >> s;

    if (s.size() == 1)
    {
        if (s[0] == '8')
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
        return 0;
    }

    if (s.size() == 2)
    {
        if (stoi(s) % 8 == 0)
        {
            cout << "Yes\n";
            return 0;
        }

        swap(s[0], s[1]);
        if (stoi(s) % 8 == 0)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
        return 0;
    }

    vector<int> mp(10, 0);

    for (char c : s)
    {
        int num = (int)(c - '0');
        mp[num]++;
    }

    for (int i = 112; i < 1000; i += 8)
    {
        auto m = mp;
        for (char c : to_string(i))
            m[c - '0']--;

        bool ok = true;
        for (auto n : m)
        {
            if (n < 0)
            {
                ok = false;
                break;
            }
        }

        if (ok)
        {
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";

    return 0;
}
