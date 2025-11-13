#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const int M = 1e9;

int main(void)
{
    int n, k, s;
    cin >> n >> k >> s;
    if (s < M)
    {
        rep(i, k)
        {
            cout << s << " ";
        }
        rep(i, n - k)
        {
            cout << s + 1;
            if (i != n - k - 1)
            {
                cout << " ";
            }
        }
    }
    else
    {
        rep(i, k)
        {
            cout << s << " ";
        }
        rep(i, n - k)
        {
            cout << 1;
            if (i != n - k - 1)
            {
                cout << " ";
            }
        }
    }
    cout << endl;
    return 0;
}
