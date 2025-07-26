#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, l, r;
    cin >> n >> l >> r;
    string s;
    cin >> s;
    for (int i = l - 1; i < r; i++)
    {
        if (s[i] != 'o')
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}