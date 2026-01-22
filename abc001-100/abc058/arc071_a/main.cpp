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

    vector<int> cnt(26, 0);

    string s;
    cin >> s;
    for (auto c : s)
    {
        cnt[c - 'a']++;
    }

    n--;
    while (n--)
    {
        vector<int> tmp(26, 0);
        cin >> s;
        for (auto c : s)
        {
            tmp[c - 'a']++;
        }
        rep(i, 26) cnt[i] = min(cnt[i], tmp[i]);
    }

    rep(i, 26)
    {
        rep(j, cnt[i]) cout << char('a' + i);
    }
    cout << endl;
    return 0;
}