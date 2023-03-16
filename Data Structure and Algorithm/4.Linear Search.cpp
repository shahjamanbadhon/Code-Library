#include<iostream>
using namespace std;

int LinearSearch(int a[],int n,int x)
{
    for(int i=0;i<n;++i)
    {
        if(a[i]==x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int a[6]={6,3,7,9,4,1};

    cout<<1+LinearSearch(a,6,9)<<endl;


}
