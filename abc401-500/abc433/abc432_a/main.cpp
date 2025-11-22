#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    int a = x - z * y;
    int b = z - 1;

    if (a >= 0 && a % b == 0)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }

    return 0;
}