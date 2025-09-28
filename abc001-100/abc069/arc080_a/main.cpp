#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void){
    int n;
    cin >> n;
    vector<int> a(n);
    int a4 = 0, a2 = 0;
    rep(i, n) {
        cin >> a[i];
        if(a[i] % 4 == 0){
            a4++;
        } else if(a[i] % 2 == 0){
            a2++;
        }
    }
    
    if(a4 >= n / 2 || (n % 2 == 0 && a4 + a2 / 2 >= n / 2) || (n % 2 == 1 && a4 + (a2 + 1) / 2 >= (n + 1) / 2)){
        cout << "Yes" << endl;
        return 0;
    }
    
    cout << "No" << endl; 
    return 0;
}
