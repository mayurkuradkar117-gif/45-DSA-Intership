#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> arr, int n, int target)
{
    int start = 0, end = arr.size() - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (target<arr[mid]){
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {10,20,30,40,50,60,70};
    int target = 60;
    int index = binarySearch(arr, arr.size(), target);
    if (index != -1)
    {
        cout << "Element found at index: " << index << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    return 0;
}