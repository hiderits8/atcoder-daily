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
    string s;
    cin >> s;
    int n = s.size();
    deque<char> ans;
    bool to_back = true;
    for (char c : s)
    {
        if (c == 'R')
        {
            to_back = !to_back;
        }
        else
        {
            if (to_back)
            {
                if (!ans.empty() && ans.back() == c)
                {
                    ans.pop_back();
                }
                else
                {
                    ans.push_back(c);
                }
            }
            else
            {
                if (!ans.empty() && ans.front() == c)
                {
                    ans.pop_front();
                }
                else
                {
                    ans.push_front(c);
                }
            }
        }
    }
    if (!to_back)
    {
        reverse(ans.begin(), ans.end());
    }
    string res(ans.begin(), ans.end());
    cout << res << endl;
    return 0;
}