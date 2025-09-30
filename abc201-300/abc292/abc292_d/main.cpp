#include <bits/stdc++.h>
#include <atcoder/dsu>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
using ll = long long;

int main(void){
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> es(m);
    rep(i, m){
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        es[i] = {a, b};
    }
    
    dsu d(n);
    for(auto [a, b]: es) d.merge(a, b);
    vector<int> numV(n, 0), numE(n, 0);
    rep(v, n) numV[d.leader(v)]++;
    for(auto [a, b]: es) numE[d.leader(a)]++;
    
    rep(i, n) if(numV[i]) {
        if(numV[i] != numE[i]){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;    
    return 0;
}
