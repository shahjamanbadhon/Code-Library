#include<bits/stdc++.h>
using namespace std;

/*
#include<queue>
pop()	removes an element from the front of the queue
front()	returns the first element of the queue
back()	returns the last element of the queue
size()	returns the number of elements in the queue
empty()	returns true if the queue is empty
*/




int main()
{
	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(6);
	q.push(7);

	cout<<"Queue's Size is : "<< q.size()<<endl;
	cout<<"Queue's Front is : "<< q.front()<<endl;
	cout<<"Queue's Back is : "<< q.back()<<endl;


	q.pop();

	cout<<"\n\nAfter pop :\n" <<endl;

	cout<<"Queue's Size is : "<< q.size()<<endl;
	cout<<"Queue's Front is : "<< q.front()<<endl;
	cout<<"Queue's Back is : "<< q.back()<<endl;


	q.pop();
	q.pop();
	q.pop();
	q.pop();


	cout<<"\n\nAfter 5 times pop :\n" <<endl;

	cout<<"Queue's Size is : "<< q.size()<<endl;
	cout<<"Queue's Front is : "<< q.front()<<endl;
	cout<<"Queue's Back is : "<< q.back()<<endl;

	//check queue is empty or not

	cout<<"\n\nAfter 5 times pop check queue is empty or not:\n" <<endl;

	if(q.empty()) cout<<"Queue is empty"<<endl;
	else cout<<"Queue is not empty"<<endl;





	return 0;
}
