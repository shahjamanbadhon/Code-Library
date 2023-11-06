#include <bits/stdc++.h>
#define QUEUE_MAX 100
using namespace std;

int queu[QUEUE_MAX], start = -1, finish = -1;

void enqueue(int value)
{
    if (finish == QUEUE_MAX - 1)
    {
        cout << "Queue is Full" << endl;
    }
    else if (start == -1 && finish == -1)
    {
        start++;
        finish++;
        queu[finish] = value;
    }
    else
    {
        finish++;
        queu[finish] = value;
    }
}

void dequeue()
{
    if (start == -1 || start > finish)
    {
        cout << "Queue is Empty" << endl;
    }
    else
    {
        cout << "Dequeued: " << queu[start] << endl;
        start++;
    }
}

void print()
{
    for (int i = start; i <= finish; i++)
        cout << queu[i] << " ";
    cout << endl;
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    print();

    dequeue(); // Dequeue the first element (10)
    print();

    enqueue(40); // Enqueue a new element (40)
    print();

    return 0;
}
