#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a % 10 == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    else if (a % 10 == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    else if (a % 10 == 4)
    {
        if (b % 2 == 0)
        {
            cout << 6 << endl;
        }
        else
        {
            cout << 4 << endl;
        }
        return 0;
    }
    else if (a % 10 == 5)
    {
        cout << 5 << endl;
        return 0;
    }
    else if (a % 10 == 6)
    {
        cout << 6 << endl;
        return 0;
    }
    else if (a % 10 == 9)
    {
        if (b % 2 == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 9 << endl;
        }
        return 0;
    }

    if (c == 1 && b % 4 == 2)
    {
        if (a % 10 == 2)
        {
            cout << 4 << endl;
        }
        else if (a % 10 == 3)
        {
            cout << 9 << endl;
        }
        else if (a % 10 == 7)
        {
            cout << 9 << endl;
        }
        else if (a % 10 == 8)
        {
            cout << 4 << endl;
        }
        return 0;
    }
    else if (c % 2 == 0)
    {
        if (b % 2 == 0)
        {
            if (a % 10 == 2)
            {
                cout << 6 << endl;
            }
            else if (a % 10 == 3)
            {
                cout << 1 << endl;
            }
            else if (a % 10 == 7)
            {
                cout << 1 << endl;
            }
            else if (a % 10 == 8)
            {
                cout << 6 << endl;
            }
            return 0;
        }
        else
        {
            if (a % 10 == 2)
            {
                cout << 2 << endl;
            }
            else if (a % 10 == 3)
            {
                cout << 3 << endl;
            }
            else if (a % 10 == 7)
            {
                cout << 7 << endl;
            }
            else if (a % 10 == 8)
            {
                cout << 8 << endl;
            }
        }
    }
    else
    {
        if (b % 2 == 0)
        {
            if (a % 10 == 2)
            {
                cout << 6 << endl;
            }
            else if (a % 10 == 3)
            {
                cout << 1 << endl;
            }
            else if (a % 10 == 7)
            {
                cout << 1 << endl;
            }
            else if (a % 10 == 8)
            {
                cout << 6 << endl;
            }
        }
        else if (b % 4 == 1)
        {
            if (a % 10 == 2)
            {
                cout << 2 << endl;
            }
            else if (a % 10 == 3)
            {
                cout << 3 << endl;
            }
            else if (a % 10 == 7)
            {
                cout << 7 << endl;
            }
            else if (a % 10 == 8)
            {
                cout << 8 << endl;
            }
        }
        else if (b % 4 == 3)
        {
            if (a % 10 == 2)
            {
                cout << 8 << endl;
            }
            else if (a % 10 == 3)
            {
                cout << 7 << endl;
            }
            else if (a % 10 == 7)
            {
                cout << 3 << endl;
            }
            else if (a % 10 == 8)
            {
                cout << 2 << endl;
            }
        }
    }

    return 0;
}
