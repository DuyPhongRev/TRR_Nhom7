#include <iostream>
#include <vector>

using namespace std;

const int X = 4; // so phan tu can sap xep trong mang

void countingSort(int arr[], int max_num)
{
    vector<int> res(X,0);
    vector<int> counting(max_num + 1, 0);

    for (int i = 0; i < X; i++)
        counting[arr[i]]++;

    for (int i = 1; i < max_num; i++)
        counting[i+1] += counting[i];

    for (int i = 0; i < X; i++)
    {
        res[counting[arr[i]]-1] = arr[i];
        counting[arr[i]]--;
    }

    for (int i = 0; i < X; i++)
        cout << res[i] << " ";
}

int main()
{
    int max_num = INT_MIN;
    int arr[X];
    for (int i = 0; i < X; i++)
    {
        cin >> arr[i];
        if (max_num < arr[i]) max_num = arr[i];
    }
    countingSort(arr, max_num);
    return 0;
}
