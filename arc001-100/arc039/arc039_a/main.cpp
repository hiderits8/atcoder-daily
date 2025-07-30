#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    int A, B;
    cin >> A >> B;
    vector<int> a(3), b(3);
    a[0] = A / 100;
    a[1] = A % 100 / 10;
    a[2] = A % 10;
    b[0] = B / 100;
    b[1] = B % 100 / 10;
    b[2] = B % 10;

    int max = INT_MIN;
    for (int i = 1; i < 10; ++i)
    {
        a[0] = i;
        int curA = a[0] * 100 + a[1] * 10 + a[2];
        int ans = curA - B;
        if (ans > max)
        {
            max = ans;
        }
    }
    a[0] = A / 100;

    for (int i = 0; i < 10; ++i)
    {
        a[1] = i;
        int curA = a[0] * 100 + a[1] * 10 + a[2];
        int ans = curA - B;
        if (ans > max)
        {
            max = ans;
        }
    }
    a[1] = A % 100 / 10;

    for (int i = 0; i < 10; ++i)
    {
        a[2] = i;
        int curA = a[0] * 100 + a[1] * 10 + a[2];
        int ans = curA - B;
        if (ans > max)
        {
            max = ans;
        }
    }
    a[2] = A % 10;

    for (int i = 1; i < 10; ++i)
    {
        b[0] = i;
        int curB = b[0] * 100 + b[1] * 10 + b[2];
        int ans = A - curB;
        if (ans > max)
        {
            max = ans;
        }
    }
    b[0] = B / 100;

    for (int i = 0; i < 10; ++i)
    {
        b[1] = i;
        int curB = b[0] * 100 + b[1] * 10 + b[2];
        int ans = A - curB;
        if (ans > max)
        {
            max = ans;
        }
    }
    b[1] = B % 100 / 10;

    for (int i = 0; i < 10; ++i)
    {
        b[2] = i;
        int curB = b[0] * 100 + b[1] * 10 + b[2];
        int ans = A - curB;
        if (ans > max)
        {
            max = ans;
        }
    }
    b[2] = B % 10;

    cout << max << endl;

    return 0;
}
