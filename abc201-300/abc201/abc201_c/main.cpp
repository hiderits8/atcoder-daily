#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    int ans = 0;

    for (int i = 0; i < 10000; ++i)
    {
        vector<bool> flg(10);
        int x = i;
        for (int j = 0; j < 4; ++j)
        {
            flg[x % 10] = true;
            x /= 10;
        }

        bool f2 = true;
        for (int j = 0; j < 10; ++j)
        {
            if (s[j] == 'o' && !flg[j])
            {
                f2 = false;
                break;
            }
            if (s[j] == 'x' && flg[j])
            {
                f2 = false;
                break;
            }
        }
        if (f2)
            ans++;
    }
    cout << ans << endl;
    return 0;
}