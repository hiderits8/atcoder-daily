#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> box(n, 0);

    for (int i = 0; i < q; i++)
    {
        if (i != 0)
        {
            cout << " ";
        }

        int x;
        cin >> x;
        if (x > 0)
        {
            box[x - 1]++;
            cout << x;
        }
        else
        {
            int min = INT_MAX;
            int num = 0;
            for (int i = 0; i < n; ++i)
            {
                if (box[i] < min)
                {
                    min = box[i];
                    num = i;
                }
            }
            box[num]++;
            cout << num + 1;
        }
    }

    cout << endl;
    return 0;
}