#include<iostream>
using namespace std;

void BubbleSort(int x[],int n)
{
    int i,j,temp;

    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n-i;++j)
        {
            if(x[j]>x[j+1])
            {
                temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
            }
        }
    }
}

int main()
{
    int a[6]={6,3,7,9,4,1};

    cout<<"Before Sorting: ";

    for(int i=0;i<6;++i)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl<<"After Sorting: ";

    BubbleSort(a,6);
    for(int i=0;i<6;++i)
    {
        cout<<a[i]<<" ";
    }
}
