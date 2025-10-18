#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int q;
    cin >> q;

    vector<int> par, sum, min_sum;

    sum.push_back(0);
    min_sum.push_back(0);

    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            char c;
            cin >> c;

            int sb = sum.back(), msb = min_sum.back();

            if (c == '(')
            {
                sum.push_back(sb + 1);
                min_sum.push_back(msb);
            }
            else
            {
                sum.push_back(sb - 1);

                sb = sum.back();

                if (sb < msb)
                {
                    min_sum.push_back(sb);
                }
                else
                {
                    min_sum.push_back(msb);
                }
            }
        }
        else
        {
            sum.pop_back();
            min_sum.pop_back();
        }

        if (sum.back() == 0 && min_sum.back() >= 0)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}