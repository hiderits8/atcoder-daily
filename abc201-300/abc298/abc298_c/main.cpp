#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, q;
    cin >> n >> q;

    vector<vector<int>> box(n + 1);
    map<int, set<int>> wh;

    for (int i = 0; i < q; ++i)
    {
        int type, x, y;
        cin >> type;
        if (type == 1)
        {
            cin >> x >> y;
            box[y].push_back(x);
            wh[x].insert(y);
        }
        else if (type == 2)
        {
            cin >> x;
            sort(box[x].begin(), box[x].end());
            for (int j = 0; j < box[x].size(); ++j)
            {
                if (j != 0)
                {
                    cout << " ";
                }
                cout << box[x][j];
            }
            cout << endl;
        }
        else if (type == 3)
        {
            cin >> x;
            bool first = true;
            for (auto it = wh[x].begin(); it != wh[x].end(); ++it)
            {
                if (!first)
                {
                    cout << " ";
                }
                cout << *it;
                first = false;
            }
            cout << endl;
        }
    }
}
