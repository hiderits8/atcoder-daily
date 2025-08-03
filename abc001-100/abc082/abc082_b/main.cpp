#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    string s, t;
    cin >> s >> t;
    sort(s.begin(), s.end());
    sort(t.rbegin(), t.rend());

    cout << (s < t ? "Yes" : "No") << endl;

    return 0;
}
