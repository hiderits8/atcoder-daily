#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, m;
    cin >> n >> m;
    set<int> seen;

    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a > m)
            continue;

        seen.insert(a);

        if (seen.size() == m)
        {
            res = n - i;
            break;
        }
    }

    cout << res << endl;

    return 0;
}