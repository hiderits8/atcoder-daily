#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#include <iomanip>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

ll money = 1000;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    rep(i, n - 1)
    {
        ll stock = 0;
        if (a[i + 1] > a[i])
            stock = money / a[i];
        money += (a[i + 1] - a[i]) * stock;
    }

    cout << money << endl;
    return 0;
}