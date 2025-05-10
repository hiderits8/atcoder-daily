#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, x;
    cin >> r >> x;
    switch (x)
    {
    case 1:
        if (r >= 1600 && r < 3000)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
        break;
    case 2:
        if (r >= 1200 && r < 2400)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
        break;
    }
    return 0;
}