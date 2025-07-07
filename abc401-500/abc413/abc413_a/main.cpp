#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, m;
    cin >> n >> m;
    int ans = 0;
    while (n--)
    {
        int a;
        cin >> a;
        ans += a;
    }

    if (ans <= m)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}