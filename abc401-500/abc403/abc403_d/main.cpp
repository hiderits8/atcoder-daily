#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, d;
    cin >> n >> d;
    unordered_map<int, int> a;
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        a[x]++;
    }

    cout << cnt << endl;

    return 0;
}