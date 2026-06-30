#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    int temp[100];
    int i = start;
    int j = mid + 1;
    int k = start;

    while (i <= mid && j <= end)
    {
        if (arr[i] < arr[j])
            temp[k] = arr[i++];
        else
            temp[k] = arr[j++];
        k++;
    }

    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while (j <= end)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for (i = start; i <= end; i++)
        arr[i] = temp[i];
}

void mergeSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;

        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);

        merge(arr, start, mid, end);
    }
}

int main()
{
    int arr[] = {5, 3, 4, 1, 2};
    int n = 5;

    printf("Before Sorting: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    mergeSort(arr, 0, n - 1);

    printf("\nAfter Sorting: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}