#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i, n) cin >> s[i];

    int x;
    string y;
    cin >> x >> y;
    cout << (s[x - 1] == y ? "Yes" : "No") << endl;

    return 0;
}