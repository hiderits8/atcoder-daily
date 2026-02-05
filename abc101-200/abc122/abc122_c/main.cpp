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
#include <climits>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int> sum(n, 0);
    rep(i, n - 1)
    {
        if (s[i] == 'A' && s[i + 1] == 'C')
        {
            sum[i + 1] = sum[i] + 1;
        }
        else
        {
            sum[i + 1] = sum[i];
        }
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--, r--;
        cout << sum[r] - sum[l] << '\n';
    }
    return 0;
}