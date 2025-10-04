#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    string x, y;
    cin >> x >> y;

    if (y == "Ocelot")
    {
        cout << "Yes" << endl;
        return 0;
    }
    else if (y == "Serval" && x != "Ocelot")
    {
        cout << "Yes" << endl;
        return 0;
    }
    else if (y == "Lynx" && x == "Lynx")
    {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;

    return 0;
}