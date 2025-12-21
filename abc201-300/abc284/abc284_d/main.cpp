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
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll p, q;
        for (ll i = 2; i * i <= n; ++i)
        {
            if (n % (i * i) == 0)
            {
                p = i;
                q = n / p / p;
                cout << p << " " << q << endl;
                break;
            }
            else if (n % i == 0)
            {
                q = i;
                p = (ll)sqrt(n / q);
                cout << p << " " << q << endl;
                break;
            }
        }
    }
    return 0;
}