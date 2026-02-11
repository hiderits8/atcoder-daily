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
    int cur = 1;
    int prev = 1;
    for (int i = 1; i <= n; ++i)
    {
        if (i == 2 * prev)
        {
            cur++;
            prev = i;
        }
        cout << cur;
        if (i < n)
        {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}