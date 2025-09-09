#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    string s;
    cin >> n >> s;

    deque<int> ans;
    ans.push_back(n);

    for (int i = n - 1; i >= 0; --i)
    {
        if (s[i] == 'L')
        {
            ans.push_back(i);
        }
        else
        {
            ans.push_front(i);
        }
    }

    bool start = true;
    for (auto p : ans)
    {
        if (start)
        {
            start = false;
        }
        else
        {
            cout << " ";
        }
        cout << p;
    }
    cout << endl;

    return 0;
}
