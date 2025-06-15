#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    string s;
    ll k;
    cin >> s >> k;

    if (s[0] != '1')
    {
        cout << s[0] << endl;
        return 0;
    }

    int idx1 = 0;
    for (int i = 1; i < s.size(); ++i)
    {
        if (s[i] == '1')
        {
            idx1 = i;
        }
        else
        {
            break;
        }
    }

    if (k <= idx1 + 1)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << s[idx1 + 1] << endl;
    }

    return 0;
}