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

    vector<string> st;
    st.push_back("");
    for (char c : s)
    {
        if (c == '(')
        {
            st.push_back("(");
        }
        else if (c == ')')
        {
            if (st.size() == 1)
                st.back() += c;
            else
                st.pop_back();
        }
        else
        {
            st.back() += c;
        }
    }
    string ans;
    for (string t : st)
        ans += t;

    cout << ans << endl;

    return 0;
}