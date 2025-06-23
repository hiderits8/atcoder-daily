#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            ans += 4;
        }
        else if (s[i] == 'B')
        {
            ans += 3;
        }
        else if (s[i] == 'C')
        {
            ans += 2;
        }
        else if (s[i] == 'D')
        {
            ans += 1;
        }
    }

    double res = (double)ans / n;

    cout << fixed << setprecision(15);
    cout << res << endl;
    return 0;
}