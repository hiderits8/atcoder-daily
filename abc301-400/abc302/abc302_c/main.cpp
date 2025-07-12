#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int diff(const string &A, const string &B)
{
    int res = 0;
    for (int i = 0; i < A.size(); ++i)
    {
        if (A[i] != B[i])
            ++res;
    }
    return res;
}

int main(void)
{
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> s[i];
    }

    sort(s.begin(), s.end());

    do
    {
        bool ok = true;
        for (int i = 0; i < n - 1; ++i)
        {
            if (diff(s[i], s[i + 1]) != 1)
                ok = false;
        }
        if (ok)
        {
            cout << "Yes" << endl;
            return 0;
        }
    } while (next_permutation(s.begin(), s.end()));

    cout << "No" << endl;
    return 0;
}
