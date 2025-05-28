#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, q;
    string s;
    cin >> n >> s >> q;
    bool fliped = false;
    for (int i = 0; i < q; i++)
    {
        int t, a, b;
        cin >> t >> a >> b;
        if (t == 1)
        {
            if (fliped)
            {
                if (a - 1 < n)
                {
                    a += n;
                }
                else
                {
                    a -= n;
                }
                if (b - 1 < n)
                {
                    b += n;
                }
                else
                {
                    b -= n;
                }
            }

            swap(s[a - 1], s[b - 1]);
        }
        else if (t == 2)
        {
            fliped = !fliped;
        }
    }

    if (fliped)
    {
        cout << s.substr(n, n) << s.substr(0, n) << endl;
    }
    else
    {
        cout << s << endl;
    }

    return 0;
}