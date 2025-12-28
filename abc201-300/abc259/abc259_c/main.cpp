#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
    string s, t;
    cin >> s >> t;
    vector<pair<char, int>> smap, tmap;
    for (int i = 0; i < s.size(); ++i)
    {
        char a = s[i];
        if (smap.empty() || smap.back().first != a)
        {
            smap.emplace_back(a, 1);
        }
        else
        {
            smap.back().second++;
        }
    }
    for (int i = 0; i < t.size(); ++i)
    {
        char a = t[i];
        if (tmap.empty() || tmap.back().first != a)
        {
            tmap.emplace_back(a, 1);
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

    for (int i = 0; i < smap.size(); ++i)
    {
        auto [cs, sn] = smap[i];
        auto [ct, tn] = tmap[i];
        if (cs != ct || sn > tn || (sn == 1 && tn != 1))
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
