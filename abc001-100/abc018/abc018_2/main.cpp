#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    string s;
    int n;
    cin >> s >> n;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        reverse(s.begin() + l, s.begin() + r + 1);
    }
    cout << s << endl;

    return 0;
}