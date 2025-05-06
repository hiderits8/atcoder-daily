#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; i < n; i++)
        {
            if (a[i] - a[j] % 200)
            {
                cnt++;
            }
        }
    }

    cout << cnt << "\n";
    return 0;
}