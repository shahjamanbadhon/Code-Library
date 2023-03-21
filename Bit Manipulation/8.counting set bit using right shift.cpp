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
    cout<<"Number of set bit: "<<cnt<<endl;

}
