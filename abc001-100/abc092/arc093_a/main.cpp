#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void){
    int n;
    cin >> n;
    vector<int> a(n + 2);
    rep(i, n) cin >> a[i];
    a[n + 1] = 0;
    
    vector<int> dist(n + 2, 0);
    rep(i, n + 1){
        dist[i + 1] = dist[i] + abs(a[i] - (i > 0 ? a[i - 1] : 0)); 
    }
    
    for(int i = 1; i <= n; ++ i){
        int left = dist[i - 1];
        int right = dist[n + 1] - dist[i + 1];
        cout << left + right + abs((i > 1 ? a[i - 2] : 0) - a[i]) << endl;
    }
    
    return 0;
}
