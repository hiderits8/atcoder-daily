#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;
    stack<pair<int, int>> p;
    int s = 0;

    while (n--)
    {
        int a;
        cin >> a;
        if (p.empty() || p.top().first != a)
        {
            p.push({a, 1});
        }
        else
        {
            p.top().second++;
        }

        s++;

        if (p.top().second == a)
        {
            s -= a;
            p.pop();
        }
        cout << s << endl;
    }

    return 0;
}
