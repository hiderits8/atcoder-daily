#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (isupper(s[i]))
        {
            cout << s[i];
        }
    }

    cout << endl;

    return 0;
}