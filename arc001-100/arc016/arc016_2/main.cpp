#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;
    vector<string> notes(n);

    rep(i, n) cin >> notes[i];

    int ans = 0;
    rep(i, 9)
    {
        bool is_sus = false;
        rep(j, n)
        {
            char note = notes[j][i];
            if (note == 'x')
            {
                ans++;
                is_sus = false;
            }
            if (note == 'o' && !is_sus)
            {
                ans++;
                is_sus = true;
            }
            if (note == '.')
                is_sus = false;
        }
    }

    cout << ans << endl;

    return 0;
}
