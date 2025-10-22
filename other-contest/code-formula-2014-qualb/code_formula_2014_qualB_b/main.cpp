#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    string n;
    cin >> n;
    reverse(n.begin(), n.end());
    int e = 0, o = 0;
    for (int i = 0; i < n.size(); ++i)
    {
        int num = n[i] - '0';
        if (i % 2 == 0)
        {
            o += num;
        }
        else
        {
            e += num;
        }
    }

    cout << e << " " << o << endl;

    return 0;
}
