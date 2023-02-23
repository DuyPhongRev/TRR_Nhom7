#include <iostream>

using namespace std;

void insertion_sort(int arr[], int &count, int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            count++;
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main() {
    int arr[] = {7, 4, 3, 8, 1, 5, 4, 2};
    int count = 0;
    int n = sizeof(arr)/ sizeof(arr[0]);
    insertion_sort(arr, count, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Number of comparisons: " << count << endl;
    return 0;
}
