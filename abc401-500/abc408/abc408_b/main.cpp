#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    set<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        st.insert(a);
    }

    vector<int> ans;
    for (auto x : st)
    {
        ans.push_back(x);
    }

    int asize = ans.size();

    cout << asize << endl;
    for (int i = 0; i < asize; i++)
    {
        cout << ans[i];
        if (i != asize - 1)
        {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}