#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int q;
    cin >> q;
    map<int, int> s;
    while (q--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int x;
            cin >> x;
            s[x]++;
        }
        else if (type == 2)
        {
            int x, c;
            cin >> x >> c;
            int a = min(s[x], c);
            s[x] -= a;
            if (s[x] == 0)
                s.erase(x);
        }
        else
        {
            cout << s.rbegin()->first - s.begin()->first << endl;
        }
    }

    return 0;
}
