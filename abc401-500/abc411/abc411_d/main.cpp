#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<string> pc(n + 1, "");

    for (int i = 0; i < q; i++)
    {
        int type, p;
        cin >> type >> p;

        if (type == 1)
        {
            pc[p] = pc[0];
        }
        else if (type == 2)
        {
            string s;
            cin >> s;
            pc[p] += s;
        }
        else if (type == 3)
        {
            pc[0] = pc[p];
        }
    }

    cout << pc[0] << endl;

    return 0;
}