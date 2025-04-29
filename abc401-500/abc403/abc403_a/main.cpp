#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (i % 2 == 0)
        {
            res += a;
        }
    }
    cout << res << "\n";

    return 0;
}