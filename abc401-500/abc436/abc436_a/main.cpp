#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int need = n - s.size();
    rep(i, need)
    {
        cout << 'o';
    }
    cout << s << endl;

    return 0;
}