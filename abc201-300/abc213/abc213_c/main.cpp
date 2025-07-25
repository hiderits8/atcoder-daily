#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    int h, w, n;
    cin >> h >> w >> n;

    vector<int> y(n), x(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> y[i] >> x[i];
    }

    vector<int> yy = y, xx = x;

    sort(yy.begin(), yy.end());
    sort(xx.begin(), xx.end());

    yy.erase(unique(yy.begin(), yy.end()), yy.end());
    xx.erase(unique(xx.begin(), xx.end()), xx.end());

    vector<int> resY(n), resX(n);
    for (int i = 0; i < n; ++i)
    {
        resY[i] = lower_bound(yy.begin(), yy.end(), y[i]) - yy.begin();
        resX[i] = lower_bound(xx.begin(), xx.end(), x[i]) - xx.begin();
    }

    for (int i = 0; i < n; ++i)
    {
        cout << resY[i] + 1 << " " << resX[i] + 1 << endl;
    }

    return 0;
}
