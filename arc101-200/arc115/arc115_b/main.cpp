#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;
    vector<vector<int>> c(n, vector<int>(n));
    rep(i, n) rep(j, n) cin >> c[i][j];

    vector<int> diff(n);
    diff[0] = 0;

    rep(i, n - 1)
    {
        diff[i + 1] = c[0][0] - c[i + 1][0];
        rep(j, n)
        {
            if (c[0][j] - c[i + 1][j] != diff[i + 1])
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    auto max_diff = max_element(diff.begin(), diff.end());
    int min_i = 0;
    rep(i, n) if (diff[i] == *max_diff) min_i = i;

    cout << "Yes" << endl;
    rep(i, n)
    {
        cout << c[i][0] - c[min_i][0];
        if (i != n - 1)
        {
            cout << " ";
        }
        else
        {
            cout << endl;
        }
    }
    rep(i, n)
    {
        cout << c[min_i][i];
        if (i != n - 1)
        {
            cout << " ";
        }
        else
        {
            cout << endl;
        }
    }

    return 0;
}
