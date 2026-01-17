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
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;

    vector<bool> a(26, false), b(26, false);
    for (auto c : s)
    {
        a[c - 'a'] = true;
    }
    for (auto c : t)
    {
        b[c - 'a'] = true;
    }

    int q;
    cin >> q;
    while (q--)
    {
        string w;
        cin >> w;
        bool taka = true, ao = true;
        for (auto c : w)
        {
            int i = c - 'a';
            if (!a[i])
                taka = false;
            if (!b[i])
                ao = false;
        }
        if (taka & ao)
        {
            cout << "Unknown" << endl;
        }
        else if (taka)
        {
            cout << "Takahashi" << endl;
        }
        else
        {
            cout << "Aoki" << endl;
        }
    }

    return 0;
}