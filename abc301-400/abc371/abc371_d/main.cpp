#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int N;
    cin >> N;
    vector<ll> X(N), P(N);
    for (int i = 0; i < N; i++)
    {
        cin >> X[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> P[i];
    }

    vector<ll> S(N + 1, 0);
    for (int i = 0; i < N; i++)
    {
        S[i + 1] = S[i] + P[i];
    }

    int Q;
    cin >> Q;
    while (Q--)
    {
        ll L, R;
        cin >> L >> R;
        int lo = int(lower_bound(X.begin(), X.end(), L) - X.begin());
        int hi = int(upper_bound(X.begin(), X.end(), R) - X.begin());
        cout << (S[hi] - S[lo]) << "\n";
    }

    return 0;
}