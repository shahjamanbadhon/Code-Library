#include<iostream>
using namespace std;
int main()
{
    long long n,cnt=0;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=0;i<64;++i)
    {
        if( (n&(1<<i))!=0 )
        {
            cnt++;
        }
    }
    cout<<"Number of set bit: "<< cnt <<endl;

}


