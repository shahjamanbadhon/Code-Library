#include<stdio.h>


int BinarySearch(int a[],int n,int x)
{
    int leaft,right,mid;
    leaft = 0;
    right = n-1;

    while(leaft<=right)
    {
        mid = (leaft+right)/2;
        if(x==a[mid])
        {
            return mid;
        }
        if(x<a[mid])
        {
            right = mid-1;
        }
        if(x>a[mid])
        {
            leaft = mid+1;
        }
    }
    return -1;
}

//using bubble sort for data sorting

void BubbleSort(int a[],int m)
{
    int temp;
    for(int i=0;i<m;++i)
    {
        for(int j=0;j<m-i;++j)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}


int main()
{
    int a[6]={6,3,7,9,4,1};
    BubbleSort(a,6);

    printf("%d\n",1+BinarySearch(a,6,7));


}
