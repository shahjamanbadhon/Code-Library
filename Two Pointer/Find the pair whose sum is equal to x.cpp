#include<iostream>
#include<algorithm>
using namespace std;

bool solve(int a[],int n,int x)
{
    int i = 0;
    int j = n-1;

    while(i<j)
    {
        int sum = a[i]+a[j];
        if(sum==x) return true;
        if(sum>x) --j;
        else i++;
    }
    return false;
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

    bool answer = solve(a,n,x);

    if(answer==true) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
