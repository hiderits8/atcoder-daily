#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

void ro(int n, int c)
{
    rep(i, c)
    {
        if (i != 0)
            cout << " ";
        cout << n;
    }
}
int main(void)
{
    int n, k;
    cin >> n >> k;

    if (n % 2 == 0)
    {
        cout << n / 2;
        for (int i = n; i > 0; --i)
        {
            if (i == n / 2)
            {
                if (k != 1)
                    cout << " ";
                ro(i, k - 1);
            }
            else
            {
                cout << " ";
                ro(i, k);
            }
        }
        cout << endl;
    }
    else
    {
        ro((n + 1) / 2, k);
        if ((n - 1) / 2 > 0)
        {
            cout << " " << (n - 1) / 2;
            for (int i = n; i > 0; --i)
            {
                if (i == (n + 1) / 2)
                    continue;
                cout << " ";
                if (i == (n - 1) / 2)
                {
                    ro(i, k - 1);
                }
                else
                {
                    ro(i, k);
                }
            }
        }
    }
    return 0;
}
