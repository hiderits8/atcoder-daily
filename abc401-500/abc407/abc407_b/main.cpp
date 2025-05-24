#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int x, y;
    cin >> x >> y;

    vector<int> a = {1, 2, 3, 4, 5, 6}, b = {1, 2, 3, 4, 5, 6};

    int cnt = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            int sum = a[i] + b[j];
            int diff = abs(a[i] - b[j]);
            if (sum >= x || diff >= y)
                cnt++;
        }
    }

    cout << fixed << setprecision(12) << double(cnt) / double(36) << endl;

    return 0;
}