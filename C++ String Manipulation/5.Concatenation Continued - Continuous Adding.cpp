#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int main()
{
    string newInput;
    string overallInput;

    do{
        cout<<"Enter Some Text: ";
        getline(cin,newInput);
        overallInput+=newInput;
    }while(newInput!="!");

    cout<<overallInput;





}

