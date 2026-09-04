#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {1, 5, 8, 9};
    reverse(v.begin(), v.end());

    for (int x : v)
    {
        cout << x << " ";
    }
}