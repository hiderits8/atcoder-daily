#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int q;
    cin >> q;
    queue<int> order;
    for (int i = 0; i < q; ++i)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            int o;
            cin >> o;
            order.push(o);
        }
        else if (a == 2)
        {
            cout << order.front() << endl;
            order.pop();
        }
    }
    return 0;
}