#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int divisors=1;

    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            int cnt=i;
            while(n%i==0)
            {
                cnt*=i;
                n=n/i;
            }
            divisors *=((cnt-1)/(i-1));
        }

    }
    cout<<divisors<<"\n";
}
