#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void){
    int n;
    cin >> n;
    vector<int> k(n);
    vector<vector<int>> a(n);
    rep(i, n){
        cin >> k[i];
        a[i] = vector<int>(k[i]);
        rep(j, k[i]) cin >> a[i][j];
    }
    
    double ans = 0;
    
    rep(i, n)rep(j, i){
        double now = 0;
        
        map<int, int> cnt;
        for(auto na: a[j]) cnt[na]++;
        
        for(auto na: a[i]) now += cnt[na];
        now /= k[i];
        now /= k[j];
        
        ans = max(ans, now);
    }
    
    printf("%.10f\n", ans);
    
    return 0;
}
