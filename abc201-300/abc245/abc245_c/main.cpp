#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    set<int> prev, next;
    prev.insert(a[0]);
    int b0;
    cin >> b0;
    prev.insert(b0);

    for (int i = 1; i < n; i++)
    {
        int b;
        cin >> b;
        bool flg = false;
        for (int p : prev)
        {
            if (abs(a[i] - p) <= k)
            {
                next.insert(a[i]);
                flg = true;
            }
            if (abs(b - p) <= k)
            {
                next.insert(b);
                flg = true;
            }
        }
        if (flg)
        {
            prev.clear();
            for (int n : next)
            {
                prev.insert(n);
            }
            next.clear();
        }
        else
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}