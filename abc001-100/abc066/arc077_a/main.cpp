#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    deque<int> b;
    rep(i, n)
    {
        if (i & 1)
        {
            b.push_back(a[i]);
        }
        else
        {
            b.push_front(a[i]);
        }
    }

    if (n & 1)
    {
        for (auto it = b.begin(); it != b.end(); ++it)
        {
            if (it != b.begin())
                cout << " ";
            cout << *it;
        }
    }
    else
    {
        for (auto it = b.rbegin(); it != b.rend(); ++it)
        {
            if (it != b.rbegin())
                cout << " ";
            cout << *it;
        }
    }
    cout << endl;
    return 0;
}
