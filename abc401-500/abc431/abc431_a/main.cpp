#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int h, b;
    cin >> h >> b;

    if (h <= b)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << h - b << endl;
    }

    return 0;
}