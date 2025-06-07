#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    string t, a;
    cin >> n >> t >> a;
    for (int i = 0; i < n; i++)
    {
        if (t[i] == 'o' && a[i] == 'o')
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}