#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;

    map<int, int> edges;
    rep(i, n)
    {
        int a;
        cin >> a;
        edges[a]++;
    }

    ll h = 0, w = 0;

    for (auto it = edges.rbegin(); it != edges.rend(); it++)
    {
        int len = it->first;
        int cnt = it->second;

        if (cnt >= 4)
        {
            if (!h)
            {
                h = len;
                w = len;
            }
            else
            {
                w = len;
            }
            break;
        }

        if (cnt >= 2)
        {
            if (!h)
            {
                h = len;
            }
            else
            {
                w = len;
                break;
            }
        }
    }
    cout << h * w << endl;

    return 0;
}
