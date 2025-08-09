#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    if (n < 3)
    {
        cout << "No" << endl;
        return 0;
    }

    string res = s.substr(n - 3, 3);
    if (res == "tea")
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}