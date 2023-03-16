#include<stdio.h>

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

    printf("Before Sorting: ");

    for(int i=0;i<6;++i)
    {
        printf("%d ",a[i]);
    }

    printf("\nAfter Sorting: ");

    BubbleSort(a,6);
    for(int i=0;i<6;++i)
    {
        printf("%d ",a[i]);
    }
}
