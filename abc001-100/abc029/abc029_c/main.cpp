#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

void f(int rest, string s)
{
    if (rest == 0)
    {
        cout << s << endl;
    }
    else
    {
        for (char c = 'a'; c <= 'c'; ++c)
        {
            f(rest - 1, s + c);
        }
    }
}

int main(void)
{
    int n;
    cin >> n;
    f(n, "");

    return 0;
}
