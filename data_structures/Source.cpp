//Use a QUEUE when you want to get things out in the order that you put them in.
//Use a STACK when you want to get things out in the reverse order than you put them in.
//Use a LIST when you want to get anything out, regardless of when you put them in

#include <iostream>
#include "list.h"
#include "linked_list.h"
#include "doubly_linked_list.h"
#include "Stack.h"
#include "Queue_array.h"
#include "Queue_linked_list.h"

using namespace std;

int main()
{
	/*list a;

	for (int i = 0; i < 10; i++)
	{
		a.add_element(i);
		a.print();
	}

	a.polling();
	a.print();
	a.polling();
	a.print();
	a.remove(0);
	a.print();*/


	//linked_list b;
	// 
	//b.add_element(2);
	//b.add_element(4);
	//b.add_element(6);
	//b.print();
	//b.add_element(9,0);
	//b.print();
	//b.remove(0);
	//b.print();
	//b.remove(1);
	//b.print();
	//b.remove(2);
	//b.print();
	//b.add_element(2);
	//b.add_element(4);
	//b.add_element(6);
	//b.print();
	//node* head = b.get_head();
	//b.reverse();
	//head = b.get_head(); // after reverse the location of head is changed
	//b.print(head);
	//b.print_reverse(head);


	/*doubly_linked_list c;
	
	c.add_element(0);
	c.add_element(1);
	c.add_element(2);
	c.add_element(3);
	c.add_element(4);
	c.add_element(5);
	c.add_element(6);
	c.add_element(7, 3);
	c.print();
	c.remove();
	c.print();
	c.remove(6);
	c.print();
	c.remove(3);
	c.print();
	c.add_element_at_head(8);
	c.print();*/


	//Stack d;
	//
	//for (int i = 0; i < 10; i++) // code to reverse a stack
	//{
	//	d.push(i);
	//}
	//while (!d.is_empty())
	//{
	//	d.top();
	//	d.pop();
	//}

	
	/*Queue_array e;

	for (int i = 0; i < 10; i++)
	{
		e.Enqueue(i);
	}
	e.Enqueue(10);
	e.Enqueue(11);
	e.Dequeue();
	e.Dequeue();
	e.Front();
	e.print();
	e.clear();
	e.print();*/

	Queue_linked_list f;

	for (int i = 0; i < 10; i++)
	{
		f.Enqueue(i);
	}
	f.print();
	f.Enqueue(10);
	f.Enqueue(11);
	f.print();
	for (int i = 0; i < 13; i++)
	{
		f.Dequeue();
	}
	f.Enqueue(897879);
	f.print();
	f.Clear();
	f.print();
}
