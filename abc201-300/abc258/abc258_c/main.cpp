#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q;
    string S;
    cin >> N >> Q >> S;

    int head = 0;
    for (int i = 0; i < Q; i++)
    {
        int t, x;
        cin >> t >> x;
        if (t == 1)
        {
            head = (head - x) % N;
            if (head < 0)
                head += N;
        }
        else
        {
            int index = (head + x - 1) % N;
            cout << S[index] << endl;
        }
    }

    return 0;
}