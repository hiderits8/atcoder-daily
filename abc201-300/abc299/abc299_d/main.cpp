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

    int l = 1, r = n;
    int ans;

    while (l < r)
    {
        int m = (l + r) / 2;
        cout << "? " << m << endl;
        int in;
        cin >> in;
        if (in == 0)
        {
            l = m;
        }
        else
        {
            r = m;
        }
        if (l + 1 == r)
            break;
    }
    cout << "! " << l << endl;
    return 0;
}