#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    bool check = false;
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> s;
        if (s == "login")
        {
            check = true;
        }
        else if (s == "logout")
        {
            check = false;
        }
        else if (s == "private")
        {
            if (!check)
            {
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}