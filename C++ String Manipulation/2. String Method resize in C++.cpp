#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int main()
{
    string s = "new string";
    //length is 10 before resize
    cout<<s.length()<<endl;
    cout<<s<<endl;

    //length is 20
    s.resize(20);

    cout<<s.length()<<endl;
    cout<<s<<endl;


    //length is 3
    s.resize(3);

    cout<<s.length()<<endl;
    cout<<s<<endl;

}
