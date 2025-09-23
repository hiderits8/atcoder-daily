#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << -1 << endl;
        return 0;
    }

    string s;
    cin >> s;

    string t = "b";
    if (t == s)
    {
        cout << 0 << endl;
        return 0;
    }

    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 1)
            t = "a" + t + "c";
        else if (i % 3 == 2)
            t = "c" + t + "a";
        else
            t = "b" + t + "b";

        if (t.size() > n)
            break;

        if (t == s)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;

    return 0;
}
