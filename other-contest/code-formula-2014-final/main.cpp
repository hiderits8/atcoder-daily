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
#include <sstream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main()
{
    string line;
    getline(cin, line);

    istringstream iss(line);
    vector<string> v;
    string w;
    while (iss >> w)
    {
        v.push_back(w);
    }

    set<string> ans;
    for (string s : v)
    {
        int sz = s.size();
        bool isActive = false;
        string tmp = "";
        for (int i = 0; i < sz; ++i)
        {
            if (s[i] == '@')
            {
                if (tmp != "")
                    ans.insert(tmp);
                isActive = true;
                tmp = "";
            }
            else if (isActive)
            {
                tmp += s[i];
                if (i == sz - 1)
                    ans.insert(tmp);
            }
        }
    }

    for (string a : ans)
    {
        cout << a << endl;
    }

    return 0;
}