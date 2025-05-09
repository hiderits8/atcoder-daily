#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll N;
    cin >> N;
    vector<ll> X(N), Y(N);
    for (ll i = 0; i < N; i++)
    {
        cin >> X[i] >> Y[i];
    }

    string S;
    cin >> S;

    unordered_map<ll, vector<pair<ll, char>>> rows;
    rows.reserve(N * 2);
    for (ll i = 0; i < N; i++)
    {
        rows[Y[i]].emplace_back(X[i], S[i]);
    }

    for (auto &row : rows)
    {
        auto &vec = row.second;
        sort(vec.begin(), vec.end());

        bool seenR = false;
        for (auto [x, c] : vec)
        {
            if (c == 'R')
            {
                seenR = true;
            }
            else if (c == 'L' && seenR)
            {
                cout << "Yes\n";
                return 0;
            }
        }

        bool seenL = false;
        for (auto it = vec.rbegin(); it != vec.rend(); ++it)
        {
            if (it->second == 'L')
            {
                seenL = true;
            }
            else if (it->second == 'R' && seenL)
            {
                cout << "Yes\n";
                return 0;
            }
        }
    }

    cout << "No\n";
    return 0;
}