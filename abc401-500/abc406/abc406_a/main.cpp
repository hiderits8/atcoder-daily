#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (c < a)
    {
        cout << "Yes\n";
        return 0;
    }
    else if (c == a)
    {
        if (d < b)
        {
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";

    return 0;
}