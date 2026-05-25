#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {4, -3, 2, -1, -7, 5};

    int n = 6;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] < 0 && arr[j + 1] < 0)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}