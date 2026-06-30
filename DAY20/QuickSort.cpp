#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quicksort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

int main()
{
    vector<int> arr = {5, 3, 4, 2, 1};

    cout << "Original Array: ";
    for (int x : arr)
        cout << x << " ";

    quicksort(arr, 0, arr.size() - 1);

    cout << "\nSorted Array: ";
    for (int x : arr)
        cout << x << " ";

    return 0;
}