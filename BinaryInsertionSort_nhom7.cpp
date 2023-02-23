#include <iostream>

using namespace std;

void binaryInsertionSort(int arr[], int &count, int n)
{
    for (int i = 1; i < n; i++)
    {
        int x = arr[i];
        int j = i - 1;
        int left = 0, right = j;
        while (left <= right)
        {
            count++;
            int mid = left + (right - left) / 2;
            if (arr[mid] < x)
            {
                left = mid + 1;
            } else
            {
                right = mid - 1;
            }
        }
        for (int k = i - 1; k >= left; k--)
        {
            arr[k + 1] = arr[k];
        }
        arr[left] = x;
    }
}

int main() {
    int arr[] = {7, 4, 3, 8, 1, 5, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    binaryInsertionSort(arr, count, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Number of comparisons: " << count << endl;
    return 0;
}
