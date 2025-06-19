#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    string s, t;
    cin >> s >> t;
    vector<pair<char, int>> smap, tmap;
    char pre1, pre2;
    for (int i = 0; i < s.size(); ++i)
    {
        if (smap.empty() || pre1 != s[i])
        {
            smap.emplace_back(s[i], 1);
            pre1 = s[i];
        }
        else
        {
            smap.back().second++;
        }
    }
    for (int i = 0; i < t.size(); ++i)
    {
        if (tmap.empty() || pre2 != t[i])
        {
            tmap.emplace_back(t[i], 1);
            pre2 = t[i];
        }
        else
        {
            tmap.back().second++;
        }
    }

    if (smap.size() != tmap.size())
    {
        cout << "No" << endl;
        return 0;
    }

    int sz = smap.size();

    bool ok = true;
    for (int i = 0; i < sz; ++i)
    {
        if (smap[i].first != tmap[i].first)
        {
            ok = false;
        }

        if (smap[i].second == tmap[i].second)
            continue;

        if (smap[i].second == 1 || tmap[i].second < smap[i].second)
        {
            ok = false;
        }
    }

    if (ok)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
