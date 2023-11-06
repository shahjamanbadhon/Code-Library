#include <bits/stdc++.h>
#define STACK_MAX 100
using namespace std;

int stacks[STACK_MAX], top = -1;

void push(int value)
{
    if (top == STACK_MAX - 1)
    {
        cout << "Stack is full" << endl;
    }
    else
    {
        top++;
        stacks[top] = value;
    }
}

void pop()
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Popped: " << stacks[top] << endl;
        top--;
    }
}

void print()
{
    for (int i = top; i >= 0; i--)
        cout << stacks[i] << " ";
    cout << endl;
}

int main()
{
    push(1);
    push(5);
    push(9);
    print();

    pop(); // Pop the top element (9)
    print();

    push(11); // Push a new element (11)
    print();

    return 0;
}
