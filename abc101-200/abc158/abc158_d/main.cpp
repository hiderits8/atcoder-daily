#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    string s;
    int q;
    cin >> s >> q;

    deque<char> deq(s.begin(), s.end());
    bool rev = false;

    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            rev = !rev;
        }
        else
        {
            int f;
            char c;
            cin >> f >> c;
            if ((f == 1 && !rev) || (f == 2 && rev))
            {
                deq.push_front(c);
            }
            else
            {
                deq.push_back(c);
            }
        }
    }

    if (rev)
        reverse(deq.begin(), deq.end());
    for (char ch : deq)
        cout << ch;
    cout << endl;

    return 0;
}
