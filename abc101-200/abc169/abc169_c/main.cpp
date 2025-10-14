#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    ll a;
    cin >> a;
    string b;
    cin >> b;

    auto dotp = b.find('.');
    string intp = b.substr(0, dotp);
    string fracp = b.substr(dotp + 1);

    int b100 = stoi(intp + fracp);

    cout << a * b100 / 100 << endl;

    return 0;
}
