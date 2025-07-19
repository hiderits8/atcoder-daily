#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    bool is_second = false;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '#')
        {
            cout << i + 1;
            if (is_second)
            {
                cout << endl;
                is_second = false;
            }
            else
            {
                cout << ",";
                is_second = true;
            }
        }
    }
    return 0;
}