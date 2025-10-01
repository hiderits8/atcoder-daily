#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    
    int ans = ((n - 1) + (k - 2)) / (k - 1);
    cout << ans << endl;
    
    return 0;
}
