#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n, m;
    cin >> n >> m;
    vector<int> d(n + 1), c(n + 1);
    rep(i, n)
    {
        c[i + 1] = i + 1;
        d[i + 1] = i + 1;
    }

    int play = 0;

    while (m--)
    {
        int next;
        cin >> next;
        if (play == next)
            continue;
        int next_case = d[next];
        c[next_case] = play;
        d[play] = next_case;
        play = next;
    }

    rep(i, n)
    {
        cout << c[i + 1] << endl;
    }

    return 0;
}
