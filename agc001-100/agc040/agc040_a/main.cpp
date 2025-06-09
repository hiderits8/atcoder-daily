#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    int n = s.size() + 1;
    vector<int> a(n, 0);

    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] == '<')
        {
            a[i] = a[i - 1] + 1;
        }
    }

    for (int i = n - 1; i > 0; i--)
    {
        if (s[i - 1] == '>')
        {
            a[i - 1] = max(a[i - 1], a[i] + 1);
        }
    }

    ll sum = 0;
    for (auto num : a)
    {
        sum += num;
    }

    cout << sum << endl;
    return 0;
}