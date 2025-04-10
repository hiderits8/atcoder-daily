#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> vec(n);
    double sec = 0;
    for (int i = 0; i < n; ++i)
    {
        int a, b;
        cin >> a >> b;
        vec[i] = {a, b};
        sec += (double)a / b;
    }

    double last = sec / 2;
    double length = 0;
    for (int i = 0; i < n; ++i)
    {
        double s;
        s = (double)vec[i].first / vec[i].second;
        if (last - s < 0)
        {
            length += (vec[i].second * last);
            cout << fixed << setprecision(15);
            cout << length << endl;
            break;
        }
        else
        {
            last -= s;
            length += vec[i].first;
        }
    }

    return 0;
}