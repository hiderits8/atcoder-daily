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
    string s, t;
    cin >> s >> t;
    int n = s.size();

    rep(i, n)
    {
        if (s[i] == t[i])
            continue;
        if (s[i] == '@' && (t[i] == 'a' || t[i] == 't' || t[i] == 'c' || t[i] == 'o' || t[i] == 'd' || t[i] == 'e' || t[i] == 'r'))
            continue;
        if (t[i] == '@' && (s[i] == 'a' || s[i] == 't' || s[i] == 'c' || s[i] == 'o' || s[i] == 'd' || s[i] == 'e' || s[i] == 'r'))
            continue;
        cout << "You will lose" << endl;
        return 0;
    }
    cout << "You can win" << endl;
    return 0;
}