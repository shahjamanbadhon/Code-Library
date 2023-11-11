#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;

    int divisors=1;

    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            int cnt=0;
            while(n%i==0)
            {
                cnt++;
                n=n/i;
            }
            divisors *=(cnt+1);
        }

    }
    cout<<divisors<<"\n";
}

int main()
{
    int t; cin>>t;

    while(t--)
    {
        solve();
    }
}

