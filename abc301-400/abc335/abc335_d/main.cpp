#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int N;
    cin >> N;

    int cr = N / 2, cc = N / 2;
    vector<vector<int>> mp(N, vector<int>(N, 0));

    mp[cr][cc] = -1;

    int top = 0, bottom = N - 1, left = 0, right = N - 1;
    int count = 1;

    while (left <= right && top <= bottom)
    {

        for (int i = left; i <= right; ++i)
        {
            if (top == cr && i == cc)
                continue;
            mp[top][i] = count++;
        }

        ++top;

        for (int i = top; i <= bottom; ++i)
        {
            if (i == cr && right == cc)
                continue;
            mp[i][right] = count++;
        }

        --right;
        if (top <= bottom)
        {
            for (int i = right; i >= left; --i)
            {
                if (bottom == cr && i == cc)
                    continue;
                mp[bottom][i] = count++;
            }
            --bottom;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; --i)
            {
                if (i == cr && left == cc)
                    continue;
                mp[i][left] = count++;
            }
            ++left;
        }
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (mp[i][j] < 0)
            {
                cout << 'T';
            }
            else
            {
                cout << mp[i][j];
            }
            if (j + 1 < N)
            {
                cout << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}