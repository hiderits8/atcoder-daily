#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#include <iomanip>
#include <climits>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<vector<int>> ref(n);
    rep(i, n) {
        cin >> a[i];
        a[i]--;
        ref[a[i]].push_back(i);
    }
    vector<int> ans(n, -1);
    for(int i = n - 1; i >= 0; i--) {
        if(ans[i] != -1) continue;
        int cur = i;
        queue<int> q;
        q.push(cur);
        while(!q.empty()) {
            int now = q.front();
            q.pop();
            if(ans[now] != -1) continue;
            ans[now] = i;
            for(int nxt : ref[now]) {
                if(ans[nxt] != -1) continue;
                q.push(nxt);
            }
        }
    }
    rep(i, n) {
        cout << ans[i] + 1 << " ";
    }
    cout << endl;
    return 0;
}