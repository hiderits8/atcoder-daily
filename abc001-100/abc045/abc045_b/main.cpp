#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    string sa, sb, sc;
    cin >> sa >> sb >> sc;

    deque<char> a(sa.begin(), sa.end()), b(sb.begin(), sb.end()), c(sc.begin(), sc.end());

    char cur = 'a';

    while (1)
    {
        if (cur == 'a')
        {
            if (a.empty())
            {
                cout << "A" << endl;
                break;
            }
            cur = a.front();
            a.pop_front();
        }
        else if (cur == 'b')
        {
            if (b.empty())
            {
                cout << "B" << endl;
                break;
            }
            cur = b.front();
            b.pop_front();
        }
        else
        {
            if (c.empty())
            {
                cout << "C" << endl;
                break;
            }
            cur = c.front();
            c.pop_front();
        }
    }

    return 0;
}
