#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    string t = s;
    bool ok = true;
    for (auto &ch : t)
    {
        if (ch == '.' && ok)
        {
            ch = 'o';
            ok = false;
        }
        else if (ch == '#')
        {
            ok = true;
        }
    }

    cout << t << endl;
    return 0;
}