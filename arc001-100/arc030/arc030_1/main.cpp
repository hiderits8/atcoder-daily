#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n, k;
    cin >> n >> k;

    cout << (n / 2 >= k ? "YES" : "NO") << endl;

    return 0;
}
