#include<iostream>
using namespace std;
int main()
{
    int n,cnt =0;
    cout<<"Enter a number: ";
    cin>>n;

    while(n)
    {
        if((n&1)!=0)
        {
            cnt++;
        }
        n=n>>1;
    }
    if(cnt==1) cout<<"THis number is power of Two"<<endl;
    else cout<<"THis number is not power of Two"<<endl;

}
