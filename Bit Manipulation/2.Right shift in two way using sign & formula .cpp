#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int x,i,n;
    cout<<"Enter a Number: ";
    cin>>x;
    cout<<"Enter Shift number: ";
    cin>>i;

    n = x >> i;
    cout<<n<<endl;


    // 2nd way: here we can use a formula for operate leaft shift operation { n = x.2^i }

    /*
    int x,i,n;
    cout<<"Enter a Number: ";
    cin>>x;
    cout<<"Enter Shift number: ";
    cin>>i;

    int m = pow(2,i);
    n = x/m;
    cout<<n<<endl;
    */



}
