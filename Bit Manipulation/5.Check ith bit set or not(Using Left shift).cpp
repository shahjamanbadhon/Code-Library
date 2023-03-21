#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Enter bit number which you check set or not: ";
    cin>>i;

    if((n&(1<<i))!=0) cout<<i<<"th bit is set"<<endl;
    else cout<<i<<"th bit is not set"<<endl;
}
