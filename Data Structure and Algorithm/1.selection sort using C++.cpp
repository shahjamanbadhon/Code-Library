#include<iostream>
using namespace std;

void selection_sort(int x[],int n)
{
    int i,j,index_min,temp;

    for(i=0;i<n;++i)
    {
        index_min=i;
        for(j=i+1;j<n;++j)
        {
            if(x[j]<x[index_min])
            {
                index_min=j;
            }
        }
        if(index_min!=i)
        {
            temp = x[i];
            x[i] = x[index_min];
            x[index_min] = temp;
        }
    }
}

int main()
{
    int a[18] = {300,3,2,4,9,20,10,22,12,100,101};

    selection_sort(a,11);

    for(int i=0;i<11;++i)
    {
        cout<<a[i]<<" ";
    }


}
