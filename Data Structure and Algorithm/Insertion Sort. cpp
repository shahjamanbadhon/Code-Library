#include <bits/stdc++.h>
using namespace std;
 
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int x = arr[i];
        int j = i - 1;
 
 
        while (x < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = x;
    }
}
 
int main()
{
    int arr[] = { 9, 12, 11, 22, 13, 5, 6 };
    int N = sizeof(arr) / sizeof(arr[0]);
    int i;
 
    insertionSort(arr, N);
 
    cout << "Sorted array: \n";
    for (i = 0; i < N; i++)
        cout << arr[i] << " ";
    cout << endl;
 
    return 0;
}
