#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;
    vector<pair<int, int>> tasks(n);
    rep(i, n)
    {
        int a, b;
        cin >> a >> b;
        tasks[i] = {a, b};
    }

    sort(tasks.begin(), tasks.end(), [&](auto a, auto b)
         { return a.second < b.second; });

    ll t = 0;
    for (auto [a, b] : tasks)
    {
        t += a;
        if (t > b)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}
