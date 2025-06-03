#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    string akb = "AKIHABARA";
    int si = 0;
    int ai = 0;

    while (si < (int)s.size() && ai < (int)akb.size())
    {
        if (s[si] == akb[ai])
        {
            si++;
            ai++;
        }
        else
        {
            if (akb[ai] == 'A')
            {
                ai++;
            }
            else
            {
                cout << "NO\n";
                return 0;
            }
        }
    }

    if (si == (int)s.size())
    {
        while (ai < (int)akb.size())
        {
            if (akb[ai] != 'A')
            {
                cout << "NO\n";
                return 0;
            }
            ai++;
        }
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}