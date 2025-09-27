#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> p(n, -1);
    vector<bool> used(n + 1, false);

    rep(i, n) {
        cin >> a[i];
        if(a[i] != -1){
            if(used[a[i]]) {
                cout << "No" << endl;
                return 0;
            }
            used[a[i]] = true;
            p[i] = a[i];
        }
    }

    queue<int> q;
    for(int i = 1; i <= n; i++) {
        if(!used[i]) {
            q.push(i);
        }
    }

    rep(i, n) {
        if(p[i] == -1) {
            p[i] = q.front();
            q.pop();
        }
    }
    
    cout << "Yes" << endl;
    rep(i, n) {
        if(i > 0) cout << " ";
        cout << p[i];
    }
    cout << endl;


    return 0;
}