#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

using ll = long long;

void fill(int l, int r, int cnt, vector<int> &a)
{
    int len = r - l;
    if (len == 1)
    {
        a[l] = (cnt ? 1 : 0);
        return;
    }
    int mid = (l + r) / 2;
    int left = cnt / 2;
    int right = cnt - left;
    fill(l, mid, left, a);
    fill(mid, r, right, a);
    return;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int a = 1;
    rep(i, n)
    {
        a *= 2;
    }

    int num = k / a;

    if (k % a == 0)
    {
        cout << 0 << endl;
        bool start = true;
        rep(i, a)
        {
            if (!start)
            {
                cout << " ";
            }
            else
            {
                start = false;
            }
            cout << num;
        }
        cout << endl;
    }
    else
    {
        cout << 1 << endl;

        int cnt = k % a;

        vector<int> ans(a, 0);
        fill(0, a, cnt, ans);

        rep(i, a)
        {
            if (i)
            {
                cout << " ";
            }
            int v = num + ans[i];
            cout << v;
        }

        cout << endl;
    }

    return 0;
}