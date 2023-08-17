#include <bits/stdc++.h>
using namespace std;
 
void insertionSort(int arr[], int n)
{
    int i=1;
    while(i<n)
    {
        int j=i;
        int temp = arr[i];
        while(j>0 && arr[j-1]>temp)
        {
            swap(arr[j-1],temp);
            j--;
        }
 
        i++;
 
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
