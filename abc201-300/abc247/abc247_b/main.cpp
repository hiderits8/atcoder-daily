#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<pair<string, string>> name(n);
    for (int i = 0; i < n; i++)
    {
        cin >> name[i].first >> name[i].second;
    }

    for (int i = 0; i < n; i++)
    {
        bool flg1 = true, flg2 = true;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (name[i].first == name[j].first || name[i].first == name[j].second)
                {
                    flg1 = false;
                }
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (name[i].second == name[j].first || name[i].second == name[j].second)
                {
                    flg2 = false;
                }
            }
        }
        if (!flg1 && !flg2)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}