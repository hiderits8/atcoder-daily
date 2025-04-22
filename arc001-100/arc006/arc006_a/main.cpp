#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    set<int> e;
    int b;
    for (int i = 0; i < 6; i++)
    {
        int a;
        cin >> a;
        e.insert(a);
    }
    cin >> b;
    int cnt = 0;
    bool hasB = false;
    for (int i = 0; i < 6; i++)
    {
        int c;
        cin >> c;
        if (e.find(c) != e.end())
        {
            cnt++;
        }
        if (c == b)
        {
            hasB = true;
        }
    }

    if (cnt == 6)
    {
        cout << 1;
    }
    else if (cnt == 5)
    {
        if (hasB)
        {
            cout << 2;
        }
        else
        {
            cout << 3;
        }
    }
    else if (cnt == 4)
    {
        cout << 4;
    }
    else if (cnt == 3)
    {
        cout << 5;
    }
    else
    {
        cout << 0;
    }
    cout << endl;

    return 0;
}