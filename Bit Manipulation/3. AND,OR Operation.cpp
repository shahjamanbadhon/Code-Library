#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int x,y,a,o,xor;
    cout<<"Enter Number 1: ";
    cin>>x;
    cout<<"Enter Number 2: ";
    cin>>y;

    a = x & y;
    o = x | y;
    o = x ^ y;

    cout<<"AND: "<<a<<endl;
    cout<<"OR: "<<o<<endl;
    cout<<"XOR: "<<xor<<endl;

}
