#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int a, b;
    cin >> a >> b;
    int small = a / b;
    int big = a / b + 1;

    double c = double(a) / double(b);

    double diffs = c - double(small);
    double diffb = double(big) - c;

    if (diffs > diffb)
    {
        cout << big << endl;
    }
    else
    {
        cout << small << endl;
    }

    return 0;
}