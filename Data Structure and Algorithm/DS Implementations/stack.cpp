#include<bits/stdc++.h>
#define stacks_MAX 100
using namespace std;

int stacks[stacks_MAX], top = -1;

void push(int value)
{
    if(top == stacks_MAX-1)
    {
        cout<<"Stack is full"<<endl;
    }
    else
    {
        top++;
        stacks[top] = value;
    }
}

void pop()
{
    //Task 01
}

void print()
{
    for(int i=top; i>=0; i--)
        cout<<stacks[i]<<" ";
}



int main()
{
    push(1);
    push(5);
    push(9);
    print();

    return 0;
}
