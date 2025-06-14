#include <iostream>
using namespace std;
int main(void)
{
    int N;
    cin >> N;
    long long ans = 0;

    for (int i = 1; i < N; ++i)
    {
        int X = i, Y = N - i;
        long long x = 0, y = 0;
        for (int j = 1; j * j <= X; ++j)
        {
            if (X % j == 0)
            {
                x++;
                if (j * j != X)
                {
                    x++;
                }
            }
        }
        for (int j = 1; j * j <= Y; ++j)
        {
            if (Y % j == 0)
            {
                y++;
                if (j * j != Y)
                {
                    y++;
                }
            }
        }

        ans += x * y;
    }

    cout << ans << endl;
    return 0;
}
