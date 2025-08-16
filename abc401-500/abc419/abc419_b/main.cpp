#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int q;
    cin >> q;
    multiset<int> ms;
    while (q--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int x;
            cin >> x;
            ms.insert(x);
        }
        else if (type == 2)
        {
            auto it = ms.begin();
            int cur = *it;
            cout << cur << endl;
            ms.erase(it);
        }
    }
    return 0;
}