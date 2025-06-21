#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, q;
    cin >> n >> q;
    set<int> bl;
    int ans = 0;

    for (int i = 0; i < q; i++)
    {
        int a;
        cin >> a;
        a--;

        bool isBlack = bl.count(a);
        bool leftIsBlack = bl.count(a - 1);
        bool rightIsBlack = bl.count(a + 1);

        if (isBlack)
        {
            if (leftIsBlack && rightIsBlack)
            {
                ans++;
            }
            else if (!leftIsBlack && !rightIsBlack)
            {
                ans--;
            }
            bl.erase(a);
        }
        else
        {
            if (leftIsBlack && rightIsBlack)
            {
                ans--;
            }
            else if (!leftIsBlack && !rightIsBlack)
            {
                ans++;
            }
            bl.insert(a);
        }

        cout << ans << endl;
    }

    return 0;
}