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

int main()
{
    int n;
    cin >> n;

    set<int> seen;
    while (n > 1)
    {
        if (seen.contains(n))
        {
            cout << "No" << endl;
            return 0;
        }
        seen.insert(n);

        int r = 0;
        while (n > 0)
        {
            int t = n % 10;
            r += t * t;
            n /= 10;
        }

        n = r;
    }

    cout << "Yes" << endl;

    return 0;
}