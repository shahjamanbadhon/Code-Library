#include<stdio.h>

void selectionsort(int a[],int n)
{
    int index,temp;

    for(int i=0;i<n;++i)
    {
        index =i;
        for(int j=i+1;j<n;++j)
        {
            if(a[j]<a[index])
            {
                index = j;
            }
        }
        if(index != i)
        {
            temp = a[i];
            a[i] = a[index];
            a[index] = temp;
        }

    }
}

int main()
{
    int a[11]={9,8,6,3,2,5,2,9,6,0};


    printf("Before Sorting: ");
    for(int i=0;i<10;++i)
    {
        printf("%d ",a[i]);
    }

    printf("\n");

    selectionsort(a,10);

    printf("After Sorting: ");

    for(int i=0;i<10;++i)
    {
        printf("%d ",a[i]);
    }


}
