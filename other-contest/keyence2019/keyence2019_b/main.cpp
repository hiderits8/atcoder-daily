#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    string need = "keyence";
    int sl = s.size();
    int nl = need.size();

    if (sl < nl)
    {
        cout << "NO" << endl;
        return 0;
    }

    for (int k = 0; k <= nl; k++)
    {
        bool flg = true;
        for (int i = 0; i < k; i++)
        {
            if (s[i] != need[i])
            {
                flg = false;
                break;
            }
        }

        if (!flg)
            continue;

        for (int i = k; i < nl; ++i)
        {
            if (s[sl - (nl - i)] != need[i])
            {
                flg = false;
                break;
            }
        }

        if (flg)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}