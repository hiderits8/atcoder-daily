#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;

    int ans = 0;
    int prev = int(s[0] - '0');

    for (int i = 0; i < s.size(); i++)
    {
        ans++;

        int num = int(s[i] - '0');
        if (num > prev)
        {
            prev += 10;
        }
        ans += (prev - num);
        prev = num;

        if (i == s.size() - 1)
        {
            ans += num;
        }
    }

    cout << ans << endl;
    return 0;
}
