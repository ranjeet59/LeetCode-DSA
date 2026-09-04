#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {4, 0, 2, 0, 7, 0, 1};
    int num = 7;

    for (int i = 0; i < num - 1; i++)
    {
        for (int j = 0; j < num - 1 - i; j++)
        {
            if (arr[j] == 0 && arr[j + 1] != 0)
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
}