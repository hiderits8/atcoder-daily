#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main()
{
    int n;
    cin >> n;

    bool is_prime = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            is_prime = false;
            break;
        }
    }

    if (is_prime && n != 1)
    {
        cout << "Prime" << endl;
        return 0;
    }

    if (n == 1 || n % 2 == 0 || n % 3 == 0 || n % 5 == 0)
    {
        cout << "Not Prime" << endl;
        return 0;
    }

    cout << "Prime" << endl;

    return 0;
}