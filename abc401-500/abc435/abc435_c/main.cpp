#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;

    int limit = 0;
    int i = 0;
    while (n--)
    {
        if (i > limit)
        {
            cout << i << endl;
            return 0;
        }
        int a;
        cin >> a;
        limit = max(limit, i + a - 1);

        i++;
    }

    cout << i << endl;
    return 0;
}