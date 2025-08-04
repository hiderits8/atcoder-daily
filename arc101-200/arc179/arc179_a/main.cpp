#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    int n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    vector<ll> sum(n + 1);
    sum[0] = 0;
    for (int i = 0; i < n; ++i)
    {
        sum[i + 1] = sum[i] + a[i];
    }

    if (k > 0)
    {
        cout << "Yes" << endl;
        sort(a.begin(), a.end());
        bool flg = false;
        for (auto ai : a)
        {
            if (flg)
                cout << " ";
            cout << ai;
            flg = true;
        }
        cout << endl;
    }
    else if (k <= 0)
    {
        if (sum[n] >= k)
        {
            cout << "Yes" << endl;
            sort(a.rbegin(), a.rend());
            bool flg = false;
            for (auto ai : a)
            {
                if (flg)
                    cout << " ";
                cout << ai;
                flg = true;
            }
        }
        else
        {
            cout << "No";
        }
        cout << endl;
    }

    return 0;
}
