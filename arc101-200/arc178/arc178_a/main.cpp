#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> ban(n);
    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        ban[a - 1]++;
    }

    if (ban[0] || ban[n - 1])
    {
        cout << "-1\n";
        return 0;
    }
    vector<int> p(n);
    iota(p.begin(), p.end(), 1);
    for (int i = 1; i < n - 1; i++)
    {
        if (ban[i])
        {
            swap(p[i], p[i + 1]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << p[i] << (i == n - 1 ? "\n" : " ");
    }
    return 0;
}