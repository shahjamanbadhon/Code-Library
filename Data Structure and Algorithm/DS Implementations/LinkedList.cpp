#include<iostream>
using namespace std;

typedef struct LinkedList *node;

//Define Linked List Structure
struct LinkedList
{
    int data;
    struct LinkedList *next;
};


//Create Node
node createNode(int value, node n)
{
    node temp;
    temp = (node) malloc(sizeof(struct LinkedList));
    temp -> data = value;
    temp -> next = n;
    return temp;
}

node head = NULL;

void addFirst(int value)
{
    head = createNode(value, head);
}

void insertAfter(int key, int value)
{
    node temp = head;

    while(temp !=NULL && temp->data !=key)
        temp=temp->next;

    if(temp!=NULL)
        temp->next = createNode(value, temp->next);

}

void insertLast(int value)
{

}



void traverse()
{
    node temp = head;
    while(temp != NULL)
    {
        cout<< temp->data <<endl;
        temp = temp->next;
    }
}


void deleteNode(int key)
{
    node temp;
    temp = head;

    if(temp -> data == key)
    {
        temp = head->next;
        //free(head);
        head = temp;
    }
    else{
        node prev;
        while(temp!=NULL && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }
        if(temp!=NULL)
        {
            prev->next = temp->next;
            //free(temp);
        }
    }
}

int main()
{
    addFirst(10);
    addFirst(20);
    insertAfter(20, 30);
    traverse();
    cout<<endl;
    deleteNode(20);
    traverse();

    return 0;
}
