#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {13, 29, 40, 2, 3, 1};

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}