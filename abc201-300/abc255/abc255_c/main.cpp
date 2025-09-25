#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void){
    ll x, a, d, n;
    cin >> x >> a >> d >> n;
    
    ll an = a + d * (n - 1);
    
    if(d >= 0){
        if(x <= a){
            cout << a - x << endl;
            return 0;
        } else if(x >= an){
            cout << x - an << endl;
            return 0;
        }
    } else {
        if(x <= an){
            cout << an - x << endl;
            return 0;
        } else if(x >= a){
            cout << x - a << endl;
            return 0;
        }
    }
    
    x -= a;
    x = abs(x);
    d = abs(d);
    
    cout << min(x % d, d - (x % d)) << endl;
 
    return 0;
}