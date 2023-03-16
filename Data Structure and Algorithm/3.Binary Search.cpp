#include<iostream>'
#include<algorithm>
using namespace std;

int BinarySearch(int a[],int n,int x)
{
    int leaft,right,mid;

    leaft = 0;
    right = n-1;

    while(leaft<=right)
    {
        mid = (leaft+right)/2;
        if(a[mid]==x)
        {
            return mid;
        }
        if(a[mid]>x)
        {
            right = mid-1;
        }
        if(a[mid]<x)
        {
            leaft = mid+1;
        }
    }
    return -1;
}


int main()
{
    int a[6]={6,3,7,9,4,1};
    sort(a,a+6);

    cout<<1+BinarySearch(a,6,7)<<endl;


}

