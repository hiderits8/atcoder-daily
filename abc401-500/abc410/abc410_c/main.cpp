#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, q;
    cin >> n >> q;
    int slide = 0;

    vector<int> a(n);
    iota(a.begin(), a.end(), 1);

    for (int i = 0; i < q; i++)
    {
        int type;
        cin >> type;

        switch (type)
        {
        case 1:
        {
            int p, x;
            cin >> p >> x;
            p = (p + slide - 1) % n;
            a[p] = x;
            break;
        }

        case 2:
        {
            int p;
            cin >> p;
            p = (p + slide - 1) % n;
            cout << a[p] << endl;
            break;
        }
        case 3:
            int k;
            cin >> k;
            slide = (slide + k) % n;
            break;

        default:
            break;
        }
    }

    return 0;
}