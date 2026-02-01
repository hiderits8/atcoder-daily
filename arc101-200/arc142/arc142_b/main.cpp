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
    int n;
    cin >> n;
    vector<vector<int>> mp(n, vector<int>(n));
    int a = 1;
    rep(i, (n + 1) / 2)
    {
        rep(j, n)
        {
            mp[i * 2][j] = a;
            a++;
        }
    }
    rep(i, n / 2)
    {
        rep(j, n)
        {
            mp[i * 2 + 1][j] = a;
            a++;
        }
    }

    rep(i, n)
    {
        rep(j, n)
        {
            cout << mp[i][j];
            if (j != n - 1)
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}
