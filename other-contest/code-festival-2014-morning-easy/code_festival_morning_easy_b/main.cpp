#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    int n;
    cin >> n;

    int ans = n % 40;

    ans = ans <= 20 ? ans : 41 - ans;

    cout << ans << endl;

    return 0;
}
