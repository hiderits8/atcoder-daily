#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    for (auto ch : s)
    {
        if (ch != 'a' && ch != 'i' && ch != 'u' && ch != 'e' && ch != 'o')
        {
            cout << ch;
        }
    }
    cout << endl;
    return 0;
}