#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

struct Q{
    ll tq;
    ll nq;
    ll cq;
};

int main(void){
    ll h, w, c, q;
    cin >> h >> w >> c >> q;
    vector<Q> query(q);
    rep(i, q) cin >> query[i].tq >> query[i].nq >> query[i].cq;
    
    vector<ll> ans(c);
    set<int> hs, ws;
    
    for(int i = q - 1; i >= 0; --i){
        ll ti = query[i].tq;
        ll ni = query[i].nq;
        ll ci = query[i].cq;
        ni--;
        ci--;
        
        if(ti == 1){
            if(hs.find(ni) == hs.end()) ans[ci] += w - ws.size();
            hs.insert(ni);
        } else {
            if(ws.find(ni) == ws.end()) ans[ci] += h - hs.size();
            ws.insert(ni);
        }
    }
    
    rep(i, c){
        if(i != 0) cout << " ";
        cout << ans[i];
    }
    cout << endl;
    
    return 0;
}
