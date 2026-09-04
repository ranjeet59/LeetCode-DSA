#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {2, 3, 5, 1, 9, 4};

    int num = 6;

    int cnt = 0;

    for (int i = 0; i < num - 1; i++)
    {
        for (int j = 0; j < num - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                cnt++;
            }
        }
    }
    for (int i = 0; i < num; i++)
    {

        cout << arr[i] << " ";
    }
    cout << "count = " << cnt;
}