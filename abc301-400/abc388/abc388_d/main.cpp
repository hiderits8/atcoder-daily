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
    vector<int> a(n), diff(n, 0);
    int curdiff = 0;
    rep(i, n)
    {
        cin >> a[i];
        curdiff += diff[i];
        int last = a[i] - (n - 1) + i * 2 + curdiff;
        if (last < 0)
        {
            diff[n - abs(last)]--;
            cout << 0;
        }
        else
        {
            cout << last;
        }
        if (i != n - 1)
        {
            cout << " ";
        }
        else
        {
            cout << endl;
        }
    }
    return 0;
}