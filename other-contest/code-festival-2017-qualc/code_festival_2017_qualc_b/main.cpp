#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> odds(n);
    for (size_t i = 0; i < n; ++i)
    {
        int a;
        cin >> a;
        if (a % 2 == 1)
        {
            odds[i] = 1;
        }
        else
        {
            odds[i] = 2;
        }
    }

    int odd = 1;
    for (auto o : odds)
    {
        odd *= o;
    }

    cout << pow(3, n) - odd << endl;

    return 0;
}