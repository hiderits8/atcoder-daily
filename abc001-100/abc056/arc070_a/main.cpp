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
    int x;
    cin >> x;
    for (int i = 1; i <= x; ++i)
    {
        if (i * (i + 1) / 2 >= x)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}