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

deque<int> s = {1, 2, 3, 4, 5, 6};

int main()
{
    ll n;
    cin >> n;
    n--;
    n %= 30;
    int p1 = n / 5;
    int p2 = n % 5;
    while (p1--)
    {
        int f = s.front();
        s.pop_front();
        s.push_back(f);
    }
    for (int i = 0; i <= p2; ++i)
    {
        swap(s[i], s[i + 1]);
    }
    for (int i = 0; i < 6; ++i)
    {
        cout << s[i];
    }
    cout << endl;
    return 0;
}