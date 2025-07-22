#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    vector<vector<int>> mp(3, vector<int>(3));
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cin >> mp[i][j];
        }
    }

    int a12 = mp[0][1] - mp[0][0];
    int a23 = mp[0][2] - mp[0][1];
    int b12 = mp[1][0] - mp[0][0];
    int b23 = mp[2][0] - mp[1][0];

    for (int i = 1; i < 3; ++i)
    {
        if (mp[i][1] - mp[i][0] != a12 || mp[i][2] - mp[i][1] != a23 || mp[1][i] - mp[0][i] != b12 || mp[2][i] - mp[1][i] != b23)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
