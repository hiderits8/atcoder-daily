#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int N;
    cin >> N;

    set<int> nextA, nextB;
    for (int i = 0; i < N; i++)
    {
        nextA.insert(i + 1);
        nextB.insert(i + 1);
    }

    vector<int> fa(N + 1);
    fa[0] = 1;
    for (int i = 1; i <= N; i++)
    {
        fa[i] = fa[i - 1] * i;
    }

    int a = 0, b = 0;

    for (int i = 0; i < N; i++)
    {
        int num1;
        cin >> num1;
        int cnt = 0;
        for (auto n : nextA)
        {
            if (n != num1)
            {
                ++cnt;
                continue;
            }
            else
            {
                a += fa[N - i - 1] * cnt;
                nextA.erase(num1);
                break;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        int num2;
        cin >> num2;
        int cnt = 0;
        for (auto n : nextB)
        {
            if (n != num2)
            {
                ++cnt;
                continue;
            }
            else
            {
                b += fa[N - i - 1] * cnt;
                nextB.erase(num2);
                break;
            }
        }
    }

    cout << abs(b - a) << endl;

    return 0;
}