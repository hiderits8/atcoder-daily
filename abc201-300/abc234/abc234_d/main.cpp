#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    priority_queue<int, vector<int>, greater<int>> que;

    for (int i = 0; i < k; ++i)
        que.push(a[i]);
    cout << que.top() << endl;
    for (int i = k; i < n; ++i)
    {
        if (que.top() < a[i])
        {
            que.pop();
            que.push(a[i]);
        }
        cout << que.top() << endl;
    }

    return 0;
}
