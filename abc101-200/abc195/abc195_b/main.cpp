#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    int a, b, w;
    cin >> a >> b >> w;
    int mi = INT_MAX;
    int ma = 0;
    for (int i = 1; i <= 1000000; ++i)
    {
        if (a * i <= 1000 * w && 1000 * w <= b * i)
        {
            mi = min(mi, i);
            ma = max(ma, i);
        }
    }
    if (ma == 0)
    {
        cout << "UNSATISFIABLE" << endl;
        return 0;
    }
    cout << mi << " " << ma << endl;
    return 0;
}
