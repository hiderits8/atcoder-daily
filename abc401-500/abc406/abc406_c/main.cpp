#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> uprange;

    int top = 0, bottom = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i < 2)
            continue;
        if (a[i - 2] < a[i - 1] && a[i - 1] > a[i])
        {
            top = i - 1;
            uprange.push_back(i - 1 - bottom);
        }
        else if (a[i - 2] > a[i - 1] && a[i - 1] < a[i])
        {
            bottom = i - 1;
        }
    }
    if (bottom != -1 && top < bottom)
    {
        uprange.push_back(n - 1 - bottom);
    }

    int res = 0;
    for (int i = 0; i < uprange.size(); i++)
    {
        if (i != 0)
        {
            res += uprange[i] * uprange[i - 1];
        }
    }
    cout << res << endl;

    return 0;
}