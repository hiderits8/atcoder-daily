#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    int maxR = 0, maxC = 0, minR = INT_MAX, minC = INT_MAX;
    for (int i = 0; i < n; ++i)
    {
        int r, c;
        cin >> r >> c;
        maxR = max(maxR, r);
        maxC = max(maxC, c);
        minR = min(minR, r);
        minC = min(minC, c);
    }

    int maxDist = max(maxR - minR, maxC - minC);
    cout << (maxDist + 1) / 2 << endl;

    return 0;
}