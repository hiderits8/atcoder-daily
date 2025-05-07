#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        mp[a + 1]++;
        mp[a]++;
        mp[a - 1]++;
    }
    int max = 0;
    for (auto [num, cnt] : mp)
    {
        if (cnt > max)
        {
            max = cnt;
        }
    }
    cout << max << "\n";

    return 0;
}