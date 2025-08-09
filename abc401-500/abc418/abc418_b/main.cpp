#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;

    int n = s.size();
    double ans = 0;
    for (int i = 0; i < n - 2; ++i)
    {
        if (s[i] == 't')
        {
            for (int j = i + 2; j < n; ++j)
            {
                if (s[j] == 't')
                {
                    int cnt = 0;
                    for (int k = i + 1; k < j; ++k)
                    {
                        if (s[k] == 't')
                        {
                            cnt++;
                        }
                    }
                    double r = (double)cnt / (j - i - 1);
                    if (r > ans)
                    {
                        ans = r;
                    }
                }
            }
        }
    }
    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}