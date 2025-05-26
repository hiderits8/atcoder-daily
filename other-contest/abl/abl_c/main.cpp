#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
using ll = long long;

int main()
{
    int N, M;
    cin >> N >> M;
    atcoder::dsu g(N);
    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        g.merge(a, b);
    }

    int ans = g.groups().size() - 1;
    cout << ans << endl;

    return 0;
}