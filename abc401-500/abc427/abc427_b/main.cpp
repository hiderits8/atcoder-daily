#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    vector<int> a(101);
    rep(i, 101)
    {
        if (i == 0 || i == 1)
        {
            a[i] = 1;
        }
        else
        {
            a[i] = a[i - 1];
            int tmp = a[i - 1];
            while (tmp > 0)
            {
                a[i] += tmp % 10;
                tmp /= 10;
            }
        }
    }

    int n;
    cin >> n;

    cout << a[n] << endl;

    return 0;
}