#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n = 5;
    vector<int> num(n);
    set<int> sum;
    for (int i = 0; i < n; ++i)
    {
        cin >> num[i];
    }

    for (int i = 0; i < n - 2; ++i)
    {
        for (int j = i + 1; j < n - 1; ++j)
        {
            for (int k = j + 1; k < n; ++k)
            {
                sum.insert(num[i] + num[j] + num[k]);
            }
        }
    }

    auto it = sum.rbegin();
    it++;
    it++;
    cout << *it << endl;
    return 0;
}
