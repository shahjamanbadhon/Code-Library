#include<iostream>
#include<math.h>
using namespace std;

void solve(int a[],int m,int b[],int n,int x)
{
    int l=0;
    int r=n-1;
    int dif= INT_MAX;

    int i,j;

    while(l<n && r>=0)
    {
        int sum=a[l]+b[r];
        if(abs(sum-x)<dif)
        {
            i=l;
            j=r;
            dif=sum;
        }
        if(sum>x) --r;
        else ++l;
    }

    cout<<"("<<a[i]<<" "<<b[j]<<")  = "<< x<<endl;

}

int main()
{
    int m;
    cin>>m;
    int a[m+3];
    for(int i=0; i<m; ++i) cin>>a[i];

    int n;
    cin>>n;
    int b[n+3];
    for(int i=0; i<n; ++i) cin>>b[i];

    int x;
    cin>>x;

    solve(a,m,b,n,x);
}
