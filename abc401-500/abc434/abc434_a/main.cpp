#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int w, b;
    cin >> w >> b;
    w *= 1000;

    cout << (w + b) / b << endl;

    return 0;
}