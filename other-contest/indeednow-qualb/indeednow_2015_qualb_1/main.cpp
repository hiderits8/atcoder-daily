#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << abs(x1 - x2) + abs(y1 - y2) + 1 << endl;
    return 0;
}