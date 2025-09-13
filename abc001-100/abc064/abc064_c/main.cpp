#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;
    vector<int> cl(8, 0);

    int b = 0;

    rep(i, n)
    {
        int a;
        cin >> a;
        if (a <= 399)
        {
            cl[0]++;
        }
        else if (a <= 799)
        {
            cl[1]++;
        }
        else if (a <= 1199)
        {
            cl[2]++;
        }
        else if (a <= 1599)
        {
            cl[3]++;
        }
        else if (a <= 1999)
        {
            cl[4]++;
        }
        else if (a <= 2399)
        {
            cl[5]++;
        }
        else if (a <= 2799)
        {
            cl[6]++;
        }
        else if (a <= 3199)
        {
            cl[7]++;
        }
        else
        {
            b++;
        }
    }

    int mi = 0;
    for (auto c : cl)
    {
        if (c > 0)
            mi++;
    }

    if (mi == 0)
    {
        cout << 1 << " " << b << endl;
    }
    else
    {
        cout << mi << " " << mi + b << endl;
    }

    return 0;
}
