#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;

    if (n % 2 == 1)
    {
        cout << -1 << endl;
        return 0;
    }

    int cnt = 0;

    for (int i = 0; i < n / 2; ++i)
    {
        if (s[i] != s[i + (n / 2)])
            cnt++;
    }

    cout << cnt << endl;

    return 0;
}