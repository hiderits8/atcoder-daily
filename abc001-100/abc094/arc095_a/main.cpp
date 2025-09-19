#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    rep(i, n) cin >> a[i];
    b = a;

    sort(b.begin(), b.end());
    int low = b[(n / 2) - 1], high = b[n / 2];
    int m2 = low + high;

    for (auto ai : a)
    {
        if (ai * 2 >= m2)
        {
            cout << low << endl;
        }
        else
        {
            cout << high << endl;
        }
    }

    return 0;
}
