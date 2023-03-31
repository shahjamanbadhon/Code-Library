#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

string removal(string s)
{
    string ns;
    for(int i=0; i<s.length();++i)
    {
        if(s.at(i)!='a')
        {
            ns+=s.at(i);
        }

        /* for removing 0-9

        if(s.at(i)!>='0' && s.at(i)!<='9')
        {
            ns+=s.at(i);
        } */
    }
    return ns;
}

int main()
{
    string newInput;

        cout<<"Enter Text: ";
        getline(cin,newInput);

        string ns;

        ns = removal(newInput);
        cout<<ns<<endl;



}


