#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> vec;
    string input;
    while (cin >> input)
    {
        vec.push_back(input);
    }

    for (size_t i = 0; i < vec.size() - 1; ++i)
    {
        cout << vec[i] << ",";
    }

    cout << vec[vec.size() - 1] << endl;

    return 0;
}