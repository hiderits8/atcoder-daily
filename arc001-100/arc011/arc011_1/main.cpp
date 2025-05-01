#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int m, n, N;
    cin >> m >> n >> N;
    int res = 0;
    int stock = 0;
    res += N;
    while (m <= N)
    {

        int set = N / m;
        stock = N - set * m;
        res += set * n;
        N = set * n;
        N += stock;
    }
    cout << res << endl;

    return 0;
}