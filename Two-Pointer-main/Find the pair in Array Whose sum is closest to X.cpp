#include<bits/stdc++.h>
using namespace std;

void solve(int a[],int n,int x)
{
    int i = 0;
    int j = n-1;
    
    int dif = INT_MAX;
    
    int ind1;
    int ind2;

    while(i<j)
    {
        int sum = a[i]+a[j];
        if(abs(sum-x)<dif)
        {
            ind1=i;
            ind2=j;
            dif=abs(sum-x);
        }
        if(sum>x) --j;
        else i++;
    }
    cout<<"("<<a[ind1]<<" "<<a[ind2]<<")  = "<< a[ind1]+a[ind2]<<endl;
}



int main()
{
    int n;
    cin>>n;
    int a[n+3];

    for(int i=0; i<n; ++i) cin>>a[i];

    sort(a,a+n);
    int x;
    cin>>x;

    solve(a,n,x);

}
