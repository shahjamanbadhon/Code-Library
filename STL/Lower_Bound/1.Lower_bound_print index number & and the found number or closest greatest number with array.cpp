#include<bits/stdc++.h>
using namespace std;

int main()
{
    //number of elements
    int n; cin>>n;
    int a[n];
    //list of elements
    for(int i=0;i<n;++i) cin>>a[i];
    //searching element
    int x; cin>>x;
    /*
    find index number of searching element
    if element not found in list it return the
    index number of first greater element or when
    searching element is greater the biggest element of
    the flist it return the index number of greatest element.
    */
    cout<<lower_bound(a,a+n,x)-a<<endl;

    /*
    if found searching element print the digit
    or else closest greater number or when
    searching element is greater the biggest element of
    the flist it return greatest element.
    */
    cout<<*lower_bound(a,a+n,x)<<endl;

}
