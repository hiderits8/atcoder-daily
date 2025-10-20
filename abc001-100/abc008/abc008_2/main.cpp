#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;

    unordered_map<string, int> vote;
    while (n--)
    {
        string s;
        cin >> s;
        vote[s]++;
    }

    int max_num = 0;
    string ans;
    for (auto [str, num] : vote)
    {
        if (num > max_num)
        {
            max_num = num;
            ans = str;
        }
    }

    cout << ans << endl;
    return 0;
}
