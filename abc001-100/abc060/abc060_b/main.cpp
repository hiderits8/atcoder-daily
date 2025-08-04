#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    int a, b, c;
    cin >> a >> b >> c;

    int g = gcd(a, b);
    cout << (c % g == 0 && c <= g * b ? "YES" : "NO") << endl;

    return 0;
}
