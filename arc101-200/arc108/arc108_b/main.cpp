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
    string s;
    cin >> n >> s;
    vector<deque<char>> st;
    for (char c : s)
    {
        if (st.empty())
        {
            deque<char> new_st;
            new_st.push_back(c);
            st.push_back(new_st);
        }
        else
        {
            char prev = st.back().back();
            if (c == 'f')
            {
                deque<char> new_st;
                new_st.push_back(c);
                st.push_back(new_st);
            }
            else if (c == 'x' && prev == 'o')
            {
                if (st.back().size() == 2 && st.back().front() == 'f')
                {
                    st.pop_back();
                }
                else
                {
                    st.back().push_back(c);
                }
            }
            else
            {
                st.back().push_back(c);
            }
        }
    }

    int ans = 0;
    for (auto &s : st)
    {
        ans += s.size();
    }
    cout << ans << endl;
    return 0;
}