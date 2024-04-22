#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int divisor=0;
    for(int i=1;i*i<=n;i++)
    {
        if(i*i==n) divisor++;
        else if(n%i==0) divisor+=2;
    }
    cout<<divisor;
}
