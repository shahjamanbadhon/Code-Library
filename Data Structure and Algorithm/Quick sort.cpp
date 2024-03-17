#include<bits/stdc++.h>
using namespace std;

int part(int A[],int low,int high){
    int pivot = A[high];
    int i = low - 1;

    for(int j = low; j < high; ++j){
        if(A[j] < pivot){
            i++;
            swap(A[i],A[j]);
        }
    }
    swap(A[i+1],A[high]);
    return i+1;

}

void quick_sort(int A[],int low,int high){
    if(low>=high) return;

    int p = part(A,low,high);
    quick_sort(A,low,p-1);
    quick_sort(A,p+1,high);
}
int main(){
    int A[10];
    for(int i = 0; i < 10; ++i) cin >> A[i];

    quick_sort(A,0,9);
    for(int i = 0; i < 10; ++i) cout << A[i] << " ";

}
