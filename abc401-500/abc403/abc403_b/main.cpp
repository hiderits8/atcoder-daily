#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    string t, u;
    cin >> t >> u;
    int diff = t.size() - u.size();
    for (int i = 0; i <= diff; i++)
    {
        for (int j = 0 + i; j < u.size() + i; j++)
        {
            if (t[j] != u[j - i] && t[j] != '?')
            {
                break;
            }
            if (j == u.size() + i - 1)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;

    return 0;
}