#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    cout << s.substr(a, n - a - b) << endl;
    return 0;
}