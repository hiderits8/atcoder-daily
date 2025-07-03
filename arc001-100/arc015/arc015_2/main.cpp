#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    int M35 = 0, M30 = 0, M25 = 0, m25 = 0, m0 = 0, M0 = 0;
    while (n--)
    {
        float Max, min;
        cin >> Max >> min;
        bool M0flg = false;
        if (Max >= 35)
        {
            M35++;
            M0flg = true;
        }
        else if (Max >= 30)
        {
            M30++;
            M0flg = true;
        }
        else if (Max >= 25)
        {
            M25++;
            M0flg = true;
        }
        else if (Max >= 0)
        {
            M0flg = true;
        }
        else
        {
            M0++;
        }

        if (M0flg == true && min < 0)
        {
            m0++;
        }

        if (min >= 25)
        {
            m25++;
        }
    }

    cout << M35 << " " << M30 << " " << M25 << " " << m25 << " " << m0 << " " << M0 << endl;
    return 0;
}
