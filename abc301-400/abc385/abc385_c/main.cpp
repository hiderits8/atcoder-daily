#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int ans = 1;
    for (int i = 1; i < n; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            int pos = j;
            int cnt = 1;
            while (pos + i < n)
            {
                if (a[pos] == a[pos + i])
                {
                    cnt++;
                    ans = max(ans, cnt);
                }
                else
                {
                    cnt = 1;
                }
                pos += i;
            }
        }
    }

    cout << ans << endl;
    return 0;
}
