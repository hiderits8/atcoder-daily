#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n + 1), pos(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        a[i] = i;
        pos[i] = i;
    }
    while (q--)
    {
        int x;
        cin >> x;
        int p0 = pos[x];
        int p1 = p0;
        if (p0 != n)
        {
            p1++;
        }
        else
        {
            p1--;
        }
        int v0 = a[p0];
        int v1 = a[p1];

        swap(pos[v0], pos[v1]);
        swap(a[p0], a[p1]);
    }

    for (int i = 1; i <= n; ++i)
    {
        cout << a[i];
        if (i != n)
            cout << " ";
    }
    cout << endl;
    return 0;
}
