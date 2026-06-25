#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {12, 45, 23, 50, 20, 8};
    

    for (int i = 0; i < arr.size()- 1; i++) 
    {
        int mini = i;
        for (int j = i ; j < arr.size(); j++) 
        {
            if (arr[mini] > arr[j]) {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
      
    for(auto it : arr) 
    {
        cout << it << " ";
    }

    return 0;
}