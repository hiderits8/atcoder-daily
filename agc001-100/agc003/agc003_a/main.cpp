#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }

    if (((mp['N'] && mp['S']) || (!mp['N'] && !mp['S'])) && ((mp['W'] && mp['E']) || (!mp['W'] && !mp['E'])))
    {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;
    return 0;
}