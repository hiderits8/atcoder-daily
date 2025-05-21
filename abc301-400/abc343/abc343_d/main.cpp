#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll N, T;
    cin >> N >> T;
    vector<ll> point(N + 1, 0);
    map<ll, ll> pmap;
    pmap[0] += N;
    for (ll i = 0; i < T; i++)
    {
        ll A, B;
        cin >> A >> B;
        pmap[point[A]]--;
        if (pmap[point[A]] == 0)
            pmap.erase(point[A]);
        point[A] += B;
        pmap[point[A]]++;

        cout << pmap.size() << endl;
    }

    return 0;
}