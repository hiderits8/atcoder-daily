#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    int n, m;
    cin >> n >> m;
    int x = 200000;

    vector<int> eat(x, -1);
    for (int i = 0; i < n; ++i)
    {
        int a;
        cin >> a;
        while (x >= a)
        {
            eat[x] = i + 1;
            x--;
        }
    }

    for (int i = 0; i < m; ++i)
    {
        int b;
        cin >> b;
        cout << eat[b] << endl;
    }
    return 0;
}
